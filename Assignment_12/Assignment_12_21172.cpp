//============================================================================
// Name        : Assignment_12.cpp
// Author      : Sumit Patil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void selection(float p[],int n)
{
	int index;
	float temp,small;
	for(int i=0;i<n;i++)
	{
		small=p[i];
		for(int j=i+1;j<n;j++)
		{
			if(p[j]<small)
			{
				small=p[j];
				index=j;
			}
		}
		if(small!=p[i])
		{
			temp=p[i];
			p[i]=p[index];
			p[index]=temp;
		}
		cout<<"\nAfter "<<i+1<<" iteration/s :";
		for(int k=0;k<n;k++)
		{
			cout<<p[k]<<" ";
		}
	}
	cout<<"\nMarks in sorted manner are :";
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}

}
void bubble(float p[],int n)
{
	float temp,small;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
		cout<<"\nAfter "<<i+1<<" iteration/s :";
		for(int k=0;k<n;k++)
		{
				cout<<p[k]<<" ";
		}
	}
	cout<<"\nMarks in sorted manner are :";
	for(int i=0;i<n;i++)
		{
			cout<<p[i]<<" ";
		}

}
int main() {
	int n,m;
	cout<<"\nEnter the total number of students :";
	cin>>n;
	float *percentage=new float[n];
	char ch;
	cout<<"\nShow menu?";
	cin>>ch;
	while(ch=='y'||ch=='Y')
	{
		cout<<"\nMENU:\n1.Enter marks\n2.Selection sort\n3.Bubble sort\n4.Display top 5\n5.Exit";
		cin>>m;
		switch(m)
		{
		case 1:for(int i=0;i<n;i++)
			   {
					cout<<"\nEnter percentage of "<<i+1<<"th student :";
					cin>>percentage[i];
			   }
			   break;
		case 2:selection(percentage,n);
			   break;
		case 3:bubble(percentage,n);
			   break;
		case 4:cout<<"\nTop 5 are :";
			   for(int i=n-1;i>=n-5;i--)
			   {
				   cout<<percentage[i]<<" ";
			   }
			   break;
		case 5:break;
		default:cout<<"\nWrong option";
				break;
		}
		cout<<"\nShow menu again?(y or n)";
		cin>>ch;
	}
	return 0;
}
/*OUTPUT:

Enter the total number of students :10

Show menu?y

MENU:
1.Enter marks
2.Selection sort
3.Bubble sort
4.Display top 5
5.Exit1

Enter percentage of 1th student :45.478

Enter percentage of 2th student :98.56

Enter percentage of 3th student :56.23

Enter percentage of 4th student :74.89

Enter percentage of 5th student :86.56

Enter percentage of 6th student :78.23

Enter percentage of 7th student :68.56

Enter percentage of 8th student :44.53

Enter percentage of 9th student :36.26

Enter percentage of 10th student :71.45

Show menu again?(y or n)y

MENU:
1.Enter marks
2.Selection sort
3.Bubble sort
4.Display top 5
5.Exit2

After 1 iteration/s :36.26 98.56 56.23 74.89 86.56 78.23 68.56 44.53 45.478 71.45 
After 2 iteration/s :36.26 44.53 56.23 74.89 86.56 78.23 68.56 98.56 45.478 71.45 
After 3 iteration/s :36.26 44.53 45.478 74.89 86.56 78.23 68.56 98.56 56.23 71.45 
After 4 iteration/s :36.26 44.53 45.478 56.23 86.56 78.23 68.56 98.56 74.89 71.45 
After 5 iteration/s :36.26 44.53 45.478 56.23 68.56 78.23 86.56 98.56 74.89 71.45 
After 6 iteration/s :36.26 44.53 45.478 56.23 68.56 71.45 86.56 98.56 74.89 78.23 
After 7 iteration/s :36.26 44.53 45.478 56.23 68.56 71.45 74.89 98.56 86.56 78.23 
After 8 iteration/s :36.26 44.53 45.478 56.23 68.56 71.45 74.89 78.23 86.56 98.56 
After 9 iteration/s :36.26 44.53 45.478 56.23 68.56 71.45 74.89 78.23 86.56 98.56 
After 10 iteration/s :36.26 44.53 45.478 56.23 68.56 71.45 74.89 78.23 86.56 98.56 
Marks in sorted manner are :36.26 44.53 45.478 56.23 68.56 71.45 74.89 78.23 86.56 98.56 
Show menu again?(y or n)y

MENU:
1.Enter marks
2.Selection sort
3.Bubble sort
4.Display top 5
5.Exit4

Top 5 are :98.56 86.56 78.23 74.89 71.45 
Show menu again?(y or n)y

MENU:
1.Enter marks
2.Selection sort
3.Bubble sort
4.Display top 5
5.Exit1

Enter percentage of 1th student :89.852

Enter percentage of 2th student :78.556

Enter percentage of 3th student :68.23

Enter percentage of 4th student :12.56

Enter percentage of 5th student :88.88

Enter percentage of 6th student :71.669

Enter percentage of 7th student :91.56

Enter percentage of 8th student :33.6

Enter percentage of 9th student :56.887

Enter percentage of 10th student :100

Show menu again?(y or n)y

MENU:
1.Enter marks
2.Selection sort
3.Bubble sort
4.Display top 5
5.Exit3

After 1 iteration/s :78.556 68.23 12.56 88.88 71.669 89.852 33.6 56.887 91.56 100 
After 2 iteration/s :68.23 12.56 78.556 71.669 88.88 33.6 56.887 89.852 91.56 100 
After 3 iteration/s :12.56 68.23 71.669 78.556 33.6 56.887 88.88 89.852 91.56 100 
After 4 iteration/s :12.56 68.23 71.669 33.6 56.887 78.556 88.88 89.852 91.56 100 
After 5 iteration/s :12.56 68.23 33.6 56.887 71.669 78.556 88.88 89.852 91.56 100 
After 6 iteration/s :12.56 33.6 56.887 68.23 71.669 78.556 88.88 89.852 91.56 100 
After 7 iteration/s :12.56 33.6 56.887 68.23 71.669 78.556 88.88 89.852 91.56 100 
After 8 iteration/s :12.56 33.6 56.887 68.23 71.669 78.556 88.88 89.852 91.56 100 
After 9 iteration/s :12.56 33.6 56.887 68.23 71.669 78.556 88.88 89.852 91.56 100 
After 10 iteration/s :12.56 33.6 56.887 68.23 71.669 78.556 88.88 89.852 91.56 100 
Marks in sorted manner are :12.56 33.6 56.887 68.23 71.669 78.556 88.88 89.852 91.56 100 
Show menu again?(y or n)y

MENU:
1.Enter marks
2.Selection sort
3.Bubble sort
4.Display top 5
5.Exit4

Top 5 are :100 91.56 89.852 88.88 78.556 
Show menu again?(y or n)y

MENU:
1.Enter marks
2.Selection sort
3.Bubble sort
4.Display top 5
5.Exit5

Show menu again?(y or n)n
*/
