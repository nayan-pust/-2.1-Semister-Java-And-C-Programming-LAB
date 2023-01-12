// Write a Java or C++ program to display exciting information
// from a file "test.txt".


#include<iostream>
#include<fstream>
#include<string>
using namespace std;

 int main()
 {
     ifstream infile;
    string iname;

    infile.open("test.txt");
    cout<<"The entered information is : "<<endl;

    while(getline(infile,iname))
    {
        cout<<iname<<endl;
    }

    infile.close();
 }
