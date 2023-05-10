#include <iostream>

using namespace std;

template <class T>
class Node
{
  T data;
  Node<T> *prev, *next;

public:
  Node(T d) : data(d), prev(NULL), next(NULL) {}
  Node() : data(0), prev(NULL), next(NULL) {}
  Node(T d, Node<T> *p, Node<T> *n) : data(d), prev(p), next(n) {}
  operator T()
  {
    return data;
  }
  void setPrev(Node<T> *p)
  {
    prev = p;
  }
  void setNext(Node<T> *n)
  {
    next = n;
  }
  Node<T> *getPrev()
  {
    return prev;
  }
  Node<T> *getNext()
  {
    return next;
  }
};

// 鏈結串列
template <class T>
class LinkedList
{
  Node<T> *head, *tail;

public:
  LinkedList() : head(NULL), tail(NULL) {} // 定義兩個空指標
  Node<T> *insertFromHead(T d)             // 插入指標節點
  {
    Node<T> *newNode = new Node<T>(d);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      // 從頭插入資料
      head->setPrev(newNode);
      newNode->setNext(head);
      head = newNode;
    }
    return newNode; // 回傳新資料
  }
  Node<T> *insertFromTail(T d)
  {
    Node<T> *newNode = new Node<T>(d);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      // 從頭插入資料
      tail->setNext(newNode);
      newNode->setPrev(tail);
      tail = newNode;
    }
    return newNode; // 回傳新資料
  }
  Node<T> *removeFromHead()
  {
    Node<T> *j = head;
    if (head != NULL)
    {
      head = head->getNext();
      if (head == NULL)
        tail = NULL;
      else
        head->setPrev(NULL); // 指指標
    }
    if (j != NULL)
      j->setNext(NULL); // 切斷鏈結
    return j;
  }
  Node<T> *removeFromTail()
  {
    Node<T> *j = tail;
    if (tail != NULL)
    {
      tail = tail->getPrev();
      if (tail == NULL)
        head = NULL;
      else
        tail->setNext(NULL);
      if (j != NULL) // 切斷原本的 tail
        j->setPrev(NULL);
    }
    return j;
  }
  friend ostream &operator<<(ostream &out, const LinkedList<T> ll) // 多載運算子，使其可以輸出
  {
    Node<T> *j = ll.head; // 給一個指標
    cout << "[";
    while (j != NULL)
    {
      if (j != ll.head)
        cout << ", ";
      cout << *j;
      j = j->getNext();
    }
    cout << "]";
    return out;
  }
  operator size_t() // 需要轉型
  {
    size_t size = 0;
    Node<T> *j = head;
    while (j != NULL)
    {
      size++;
      j = j->getNext();
    }
    return size;
  }
};

// 強制轉型
int main()
{
  LinkedList<char> *ll = new LinkedList<char>();
  int j;
  for (j = 'A'; j < 'E'; j++)
    ll->insertFromTail(j + 1);
  for (j = 'E'; j < 'I'; j++)
    ll->insertFromHead(j + 1);
  cout << *ll << endl;

  Node<char> *temp = ll->removeFromHead();
  while (temp != NULL)
  {
    cout << *temp << endl;
    size_t s = *ll;                   // 執行時戳到 friend
    cout << s << ": " << *ll << endl; // 轉型時做 operator
    delete temp;
    temp = ll->removeFromTail();
  }
}