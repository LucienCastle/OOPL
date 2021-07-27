//============================================================================
// Name        : Assignment_8_inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class publication{
	string title;
	float price;
public:
	void add(){
		cout<<"\nEnter the title";
		cin>>title;
		cout<<"\nEnter mrp";
		cin>>price;
	}
	void get(){
		cout<<"\nTitle :"<<title;
		cout<<"\nPrice :"<<price;
	}
};
class book:public publication{
	int pagecount;
public:
	void adddetails()
	{
		add();
		cout<<"\nEnter the number of pages";
		cin>>pagecount;
	}
	void display(){
		get();
		cout<<"\nPages :"<<pagecount;
	}
};
class tape:public publication{
	float playingtime;
public:
	void adddetails()
	{
		add();
		cout<<"\nEnter the playing time of tape";
		cin>>playingtime;
	}
	void display(){
		get();
		cout<<"\nPlaying time :"<<playingtime;
	}
};
int main() {
	int n,l,m;
	cout<<"\nEnter number of books and tapes";
	cin>>l>>m;
	book b[l];
	tape t[m];
	char ch;
	cout<<"\nShow menu?";
	cin>>ch;
	while(ch=='y')
	{
		cout<<"\nMenu:\n1.Enter details of book\n2.Enter details of tape\n3.Display details\n4.Exit";
		cin>>n;
		switch(n)
		{
		case 1:for(int i=0;i<l;i++)
		   	   {
					b[i].adddetails();
		   	   }
	       	   break;
		case 2:for(int i=0;i<m;i++)
	   	   	   {
					t[i].adddetails();
	   	   	   }
	       	   break;
		case 3:cout<<"\nDetails of books";
		   	   for(int i=0;i<l;i++)
		   	   {
		   		   b[i].display();
		   		   cout<<"\n";
		   	   }
		   	   cout<<"\n----------------------------------------------";
		   	   cout<<"\nDetails of tape";
		   	   for(int i=0;i<l;i++)
		   	   {
		   		   t[i].display();
		   		   cout<<"\n";
		   	   }
		   	   break;
		case 4:return 0;
		default:cout<<"\nWrong option";
	        	break;
		}
		cout<<"\nShow menu?";
		cin>>ch;
	}
	return 0;
}
