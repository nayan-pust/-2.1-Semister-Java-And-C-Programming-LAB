//Write a Java or C++ Program to calculate the area of a rectangular
//and square using classes and objects, where the length is 20 and
//width is 6 meter

#include<iostream>
using namespace std;
class rectangle{
  int length = 20;
  int width = 6;
  public:
  void area(){
    cout << "The area of the rectangle is: " <<
        length*width << endl;
  }
};
class square{
  int length = 20;
  public:
  void area(){
    cout << "The area of the square is: " <<
      length*length << endl;
  } 
};
int main()
{
  rectangle rec;
  square sq;
  rec.area();
  sq.area();

  return 0;
}
