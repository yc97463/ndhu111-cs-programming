#include <iostream>

using namespace std;

/*

Create two classes:
Cube
  The Cube class should have three data fields- length, width and height of int types.
CubeVol
  The CubeVol class is derived from Cube class, i.e., it is the sub-class of Cube class. The class should have read_input() method, to read the values of length, width and height of the Cube. The CubeVol class should have a display() method to print the volume of the Cube ( length * width * height ).
You can add any function you need in both class.

*/

class Cube
{
public:
  void setLength(int l)
  {
    length = l <= 0 ? 0 : l;
  }
  void setWidth(int w)
  {
    width = w <= 0 ? 0 : w;
  }
  void setHeight(int h)
  {
    height = h <= 0 ? 0 : h;
  }
  int getLength()
  {
    return length;
  }
  int getWidth()
  {
    return width;
  }
  int getHeight()
  {
    return height;
  }

private:
  int length, width, height;
};

class CubeVol : public Cube
{
public:
  void read_input()
  {
    int l;
    cin >> l;
    setLength(l);
    int w;
    cin >> w;
    setWidth(w);
    int h;
    cin >> h;
    setHeight(h);
  }
  int display()
  {
    int vol = getLength() * getWidth() * getHeight();
    cout << vol << endl;
  }
};

int main()
{
  CubeVol cube;
  cube.read_input();
  cube.display();
  return 0;
};