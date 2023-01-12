//Write a Java or C++ program to enter Roll, Name and mark by the
//keyboard and display that information just converted the mark into
//letter grade for the following conditions using inheritance: 80% and
//above A+, more than 75% to less than 80%=A and less than 75%=F



#include<iostream>
using namespace std;
class student{
  string name;
  int roll;
public:
  void b_input(){
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter roll: ";
    cin >> roll;
  }
  void b_display(){
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
  }
};
class grade : private student{
int mark;
public:
  void input(){
    b_input();
    cout << "Enter marks: ";
    cin >> mark;
  }
  void display(){
    b_display();
    if(mark >= 80) 
      cout << "Grade: A+" << endl;
    else if(mark >= 75)
      cout << "Grade: A" << endl;
    else 
      cout << "Grade: F" << endl;
  }
};
int main()
{
  grade stu;
  stu.input();
  stu.display();

  return 0;
}
