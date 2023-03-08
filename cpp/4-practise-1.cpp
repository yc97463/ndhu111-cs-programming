#include <iostream>

using namespace std;

/*

Create a class named 'Rectangle' with two data members 'length' and 'width' and two functions to print the area and perimeter of the rectangle.
Its constructor having parameters 'len' and 'wid' used to initialize the length and width of the rectangle.

Let class 'Square' inherit the 'Rectangle' class with its constructor having a parameter for its side (suppose s) calling the constructor of its parent class.

Print the area and perimeter of a rectangle and a square.

*/

class Rectangle
{
public:
  void initLW()
  {
    cin >> length >> width;
    side = length > width ? width : length;
  }
  int getArea()
  {
    return length * width;
  }
  int getPerimeter()
  {
    return 2 * (length + width);
  }
  int getSide()
  {
    return side;
  }

private:
  int length, width, side;
};

class Square : public Rectangle
{
public:
  int getArea(int side)
  {
    return side * side;
  }
  int getPerimeter(int side)
  {
    return 4 * side;
  }

private:
  int side;
};

int main()
{
  Rectangle rec;
  Square squ;

  rec.initLW();
  cout << "area of rec: " << rec.getArea() << endl;
  cout << "perimeter of rec: " << rec.getPerimeter() << endl;

  int side = rec.getSide();
  cout << "area of squ: " << squ.getArea(side) << endl;
  cout << "perimeter of squ: " << squ.getPerimeter(side) << endl;
}