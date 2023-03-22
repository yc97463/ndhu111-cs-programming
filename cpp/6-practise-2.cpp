#include <iostream>

using namespace std;

class Node
{
public:
  Node(int n = 0) : data(n){};
  int getData()
  {
    return data;
  }

private:
  int data;
};

class ListNode : public Node
{
public:
  ListNode(int n = 0) : Node(n)
  {
    prev = NULL;
    next = NULL;
  }
  ListNode *getPrev()
  {
    return prev;
  }
  ListNode *getNext()
  {
    return next;
  }
  void setPrev(ListNode *n)
  {
    prev = n;
  }
  void setNext(ListNode *n)
  {
    next = n;
  }

private:
  ListNode *prev, *next;
};

class LinkList
{
public:
  LinkList()
  {
    head = NULL;
  }
  ListNode *insert(int data)
  {
    ListNode *newData = new ListNode(data);
    if (head == NULL)
      head = newData;
    else
    {
      ListNode *j = head;
      while (j->getNext() != NULL)
        j = j->getNext();
      newData->setPrev(j);
      j->setNext(newData);
    }
    return newData;
  }
  ListNode *rinsert(int data)
  {
    ListNode *newData = new ListNode(data);
    if (head == NULL)
    {
      head = newData;
    }
    else
    {
      ListNode *j = head;
      while (j->getNext() != NULL)
      {
        j = j->getNext();
      }
      j->setNext(newData);
      newData->setPrev(j);
      head->setPrev(newData);
      newData->setNext(head);
      head = newData;
    }
    return newData;
  }
  ListNode *remove(ListNode *node)
  {
    if (node == NULL)
    {
      return NULL;
    }
    if (node == head)
    {
      head = head->getNext();
      if (head != NULL)
      {
        head->setPrev(NULL);
      }
      node->setNext(NULL);
      return node;
    }
    node->getPrev()->setNext(node->getNext());
    if (node->getNext() != NULL)
    {
      node->getNext()->setPrev(node->getPrev());
    }
    node->setPrev(NULL);
    node->setNext(NULL);
    return node;
  }
  ListNode *remove(int data)
  {
    ListNode *j = head;
    while (j != NULL && j->getData() != data)
      j = j->getNext();
    if (j == NULL)
      return NULL;
    if (j == head)
    {
      head = head->getNext();
      if (head != NULL)
        head->setPrev(NULL);
      j->setNext(NULL);
      return j;
    }
    j->getPrev()->setNext(j->getNext());
    if (j->getNext() != NULL)
      j->getNext()->setPrev(j->getPrev());
    j->setPrev(NULL);
    j->setNext(NULL);
    return j;
  }
  ListNode *operator[](int n)
  {
    ListNode *j = head;
    while (j != NULL && n > 0)
    {
      j = j->getNext();
      n--;
    }
    return j;
  }
  friend ostream &operator<<(ostream &, LinkList *);

private:
  ListNode *head;
};

ostream &operator<<(ostream &out, LinkList *ll)
{
  ListNode *j = ll->head;
  out << "(";
  if (ll->head)
  {
    out << j->getData();
    j = j->getNext();
  }
  while (j)
  {
    cout << ", " << j->getData();
    j = j->getNext();
  }
  out << ")";
  return out;
}
ostream &operator<<(ostream &out, ListNode *node)
{
  out << node->getData();
  return out;
}

int main()
{
  LinkList *ll = new LinkList();
  int j;
  for (j = 0; j < 10; j++)
    ll->insert(j * 5);
  cout << ll << endl;
  // ll->remove(0);
  // cout<<ll<<endl;
  // cout<<(*ll)[3];
  ll->remove((*ll)[3]);
  cout << ll;
}