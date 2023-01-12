// Q1.Write a C++ Program to short an arry of integer into acending oder.


#include<iostream>
using namespace std;
int main()
{
    int i,j,size,arr[100],temp;
    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter the array "<<size<<" element : ";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are : ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<"\nThe assending array elements are : ";
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}
