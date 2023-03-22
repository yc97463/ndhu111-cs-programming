#include <iostream>
using namespace std;

class ComplexNumber
{
public:
  ComplexNumber() : x(0), y(0){};                       // 預設建構子
  ComplexNumber(double _x, double _y) : x(_x), y(_y){}; // 傳入建構子
  void display()
  {
    cout << "(" << x << "+" << y << "i)";
  }
  // 加減乘除
  ComplexNumber operator+(ComplexNumber b)
  {
    ComplexNumber c;
    c.x = x + b.x;
    c.y = y + b.y;
    return c;
  }

  // 後綴 ++，操作虛部

  // 前綴 ++，操作實部

private:
  double x, y;
};

int main()
{
  ComplexNumber c1(1, 2) c2(3, 4) c3;
  c3 = c1 + c2;
  c3.display();
  return 0;
}