#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file;
    file.open("test.txt");
    string name;
    int roll;
    cout<<"Enter name : ";
    getline(cin,name);
    cout<<"Enter roll : ";
    cin>>roll;
    file<<"Name : "<<name<<"\nRoll : "<<roll<<endl;
    file.close();

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
