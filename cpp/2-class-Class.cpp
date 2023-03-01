#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
  Point(char n, float _x, float _y)
  {
    std::cout << "C" << n << std::endl;
    x = _x;
    y = _y;
    name = n;
  }
  Point(float _x, float _y)
  {
    // std::cout<<"建構子";
    x = _x;
    y = _y;
  }
  ~Point()
  {
    std::cout << "D" << name << std::endl;
  }
  float dist(Point b)
  {
    return sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
  }
  bool equal(Point b)
  {
    if (dist(b) <= 0.0001)
      return true;
    else
      return false;
  }
  Point()
  {
  }
  float getX()
  {
    return x;
  }
  float getY()
  {
    return y;
  }

private:
  char name;
  float x, y;
};

class Rect
{
public:
  Rect(Point ll, Point ur)
  {
    // lowerLeft = ll;
    // upperRight = ur;
    lowerLeft = new Point(ll.getX(), ll.getY());
    upperRight = new Point(ur.getX(), ur.getY());
  }
  float area()
  {
    // return (upperRight.getX() - lowerLeft.getX()) * (upperRight.getY() - lowerLeft.getY());
    return (upperRight->getX() - lowerLeft->getX()) * (upperRight->getY() - lowerLeft->getY());
  }
  bool check(Point b)
  {
    if (b.getX() < lowerLeft->getX() || b.getX() > upperRight->getX())
      return false;
    if (b.getY() < lowerLeft->getY() || b.getY() > upperRight->getY())
      return false;
    return true;
  }

private:
  // Point lowerLeft, upperRight;
  Point *lowerLeft, *upperRight;
};

int main()
{
  /*Point a('a', 1.2, 2.3), c(5, 6);
  //a.x = 1.2;
  //a.y = 2.3;
  {
      Point b('b', 2, 3);
  }
  std::cout<<"("<<a.x<<", "<<a.y<<")";
  //std::cout<<"("<<b.x<<", "<<b.y<<")";*/
  Point a('a', 1, 2);
  Point b('b', 0.9, 2.0001);
  Point c('c', 3, 4.1);
  std::cout << a.dist(b) << std::endl;
  std::cout << b.dist(a) << std::endl;
  std::cout << b.equal(a) << std::endl;
  Rect r1(a, c);
  std::cout << r1.area() << std::endl;
  std::cout << r1.check(b) << std::endl;
  Point *p = new Point('p', 5, 6);
  p = NULL;
  std::cout << p->dist(b) << std::endl;
  std::cout << b.dist(*p) << std::endl;
  return 0;
}