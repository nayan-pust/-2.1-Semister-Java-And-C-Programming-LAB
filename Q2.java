
    //  Q2.Write a java Program to short an arry of integer into decending oder

import java.util.*;
class Q2
{  
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		
	        int i,j,n,temp;
		
		System.out.println("Enter the number of elements:") ;
 		n = sc.nextInt();
		int[] a = new int[n];
 
    		System.out.println("Enter the elements") ;
    		for(i=0;i<n;i++)
    		{
        		a[i] = sc.nextInt();
    		}
		
		for(i=0;i<n;i++)
    		{
        		for(j=i+1;j<n;j++)
        		{
            			if(a[i]<a[j])
            			{
			                temp=a[i];
                			a[i]=a[j];
                			a[j]=temp;
            			}
		        }
    		}
    		System.out.println("Elements sorted in descending order are");
    		for(i=0;i<n;i++)
    		{
        		System.out.print(a[i]+" ") ;
    		}
	}	
}
