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
