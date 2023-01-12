//Write a C++ program to perform addition, subtraction,
//multiplication and division of two integers using switch statement.

#include<iostream>
using namespace std;

int main()
{
  int num1, num2, choice;
  cout << "Enter two integers: ";
  cin >> num1 >> num2;
  cout << "Choose 1 for Summation.\n \t2 for Subtraction.\n";
  cout << "\t3 for Multiplication.\n \t4 for Division.\n";
  cout << "Enter 0 for exit... " << endl;
  
  while(true){
    cout << "Enter choice: ";
    cin >> choice;
    if(choice == 0) break;
    switch (choice)
    {
    case 1:
      cout << "Summation is: " << num1+num2 << endl;
      break;
    case 2:
      cout << "Subtraction is: " << num1-num2 << endl;
      break;
    case 3:
      cout << "Multiplication is: " << num1*num2 << endl;
      break;
    case 4:
      cout << "Division is: " << num1/num2 << endl;
      break;
    default:
      cout << "Invalid option\a.\n\t\tTry again!" << endl;
      break;
    }
  }
  

  return 0;
}
