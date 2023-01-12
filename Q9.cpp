//Write a Java program to calculate the area and volume of a room
//using method overloading; where length width and height are 50, 7
//and 15 meter respectively.

#include<iostream>
using namespace std;

int area(int l, int w){
  return (l*w);
}
int volume(int l, int w, int h){
  return (l*w*h);
}
int main()
{
  int length = 50, width = 7, height = 15;
  cout << "Area of the room is: " <<
      area(length, width) << endl;
  cout << "Volume of the room is: " << 
      volume(length, width, height) << endl;

  return 0;
}
