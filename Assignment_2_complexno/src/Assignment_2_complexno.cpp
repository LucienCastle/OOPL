//============================================================================
// Name        : Assignment_2_complexno.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Complex{
	float rp;
	float cp;
public:
	Complex(){
		rp=0;
		cp=0;
    }
	Complex(int a,int b){
			rp=a;
			cp=b;
	    }

	void operator +(const Complex &a)
	{
		int x,y;
		x=rp+a.cp;
		y=cp+a.cp;
		Complex no3(x,y);
		cout<<no3;
	}
	void operator *(const Complex &a)
	{
		int x,y;
		x=rp*a.rp-cp*a.cp;
		y=cp*a.rp+rp*a.cp;
		Complex no3(x,y);
		cout<<no3;
	}
	friend istream &operator>>(istream &read,  Complex &a)
	{
		cout<<"\nEnter the real and complex part of the number";
	    read>>a.rp;
        read>>a.cp;
		return read;
	}
	friend ostream & operator<<(ostream &print, const Complex &a)
	{
		print<<a.rp<<"+"<<a.cp<<"i";
		return print;
	}
};
int main() {
	char a,b;
	Complex no1,no2,no3;

    cout<<"\nShow menu?";
	cin>>b;
	while(b=='y')
	{
		cout<<"\nEnter the operation\n> - to read\n< - to display\n+ - to add\n* - for product";
		cin>>a;
		switch(a)
		{
		case '>':cin>>no1;
				 break;
		case '<':cout<<no1;
	         	 break;
		case '+':cout<<"Enter 2nd complex number";
	         	 cin>>no2;
	         	 no2+no1;
	         	 break;
		case '*':cout<<"Enter 2nd complex number";
             	 cin>>no2;
             	 no2*no1;
             	 break;
		default :cout<<"\nWrong choice";
	         	 break;
		}
		cout<<"\nShow menu?";
		cin>>b;
	}
	return 0;
}
