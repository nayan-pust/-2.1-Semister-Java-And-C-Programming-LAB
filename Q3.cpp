// Write a Java or C++ Program to display the left triangle using nested 
// for loops


#include<iostream>
using namespace std;
int main()
{
    int row,i,j;
    cout<<"Enter the number of row : ";
    cin>>row;
    cout<<"The "<<row<<" rows tringle is :"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
