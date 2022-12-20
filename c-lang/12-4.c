#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int opString(char *target, const char *source, int op)
{
  // 先將目標字串的末尾的小寫 x 移除
  int targetLen = strlen(target);
  while (targetLen > 0 && target[targetLen - 1] == 'x')
  {
    target[targetLen - 1] = '\0';
    targetLen--;
  }

  // 使用 static 變數來記錄函數呼叫次數
  static int callCount = 0;

  // 執行操作
  if (op == 1)
  {
    // 複製來源字串到目標字串
    strcpy(target, source);
  }
  else if (op == 2)
  {
    // 接在目標字串後面
    int sourceLen = strlen(source);
    int targetMaxLen = strlen(target);
    int copyLen = sourceLen;
    if (targetLen + sourceLen > targetMaxLen)
    {
      // 如果會超出長度限制，則只拷貝能拷貝的最大長度
      copyLen = targetMaxLen - targetLen;
    }
    strncat(target, source, copyLen);
  }

  // 累計呼叫次數
  callCount++;

  // 回傳函數呼叫次數
  return callCount;
}

int main()
{
  char des[101] = {'\0'};
  char str[50];
  int count, op;
  while (scanf("%d%s", &op, str) != EOF)
  {
    count = opString(des, str, op);
    printf("Times = %d, String = %s\n", count, des);
  }
  return 0;
}

// Finish opString function definition