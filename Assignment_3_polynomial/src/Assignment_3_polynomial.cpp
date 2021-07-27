//============================================================================
// Name        : Assignment_3_polynomial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
class Quadratic{
	float a,b,c;
public:
	Quadratic(){
		a=0;
		b=0;
		c=0;
	}
	Quadratic(int x,int y,int z){
		a=x;
       	b=y;
		c=z;
	}
	Quadratic operator +(const Quadratic q)
	{
		int x,y,z;
		x=a+q.a;
		y=b+q.b;
		z=c+q.c;



		Quadratic q3(x,y,z);
		cout<<q3;
		return q3;
	}



	void eval(int n)
	{
		cout<<"\nThe value of the quadratic is :"<<a*n*n+b*n+c;
	}
	void solution()
	{
		double s1,s2,d;
		d=b*b-4*a*c;
		if(d<0)
			cout<<"\nThe equation has imaginary solutions";
		else
		{
			s1=(-b+sqrt(d))/(2*a);
			s2=(-b-pow(d,0.5))/(2*a);
		    cout<<"\nThe solution of the quadratic is :"<<s1<<" & "<<s2;
		}
	}
	friend istream& operator >>(istream &read,  Quadratic &q)
	{
	    cout<<"\nEnter the constants a,b,c of the quadratic of the form ax^2+bx+c";
	    read>>q.a>>q.b>>q.c;
	    return read;
	}
	friend ostream &operator<<(ostream &print, const Quadratic &q)
	{
		print<<q.a<<"X^2+"<<q.b<<"X+"<<q.c;
		return print;
	}

};
int main() {
	int n,m,l;
	char a,b;
	Quadratic q1,q2,q3;
   	cout<<"\nShow menu?";
	cin>>b;
	while(b=='y')
	{
	 cout<<"\nMENU:\n1.Operations\n2.Evaluate\n3.Solution";
	 cin>>n;
	 switch(n)
	 {
	 case 1:char k;
	        cout<<"\nShow operations menu?";
            cin>>k;
            while(k=='y')
         	{
		     cout<<"\nEnter the operation\n> - to read\n< - to display\n+ - to add";
	         cin>>a;
	         switch(a)
	         {
	         case '>':cin>>q1;
	                  break;
	         case '<':cout<<q1;
	                  break;
	         case '+':cout<<"Enter 2nd Quadratic";
	                  cin>>q2;
	         	      q3=q1+q2;
	         	      break;
	         default :cout<<"\nWrong choice";
	         	      break;
	         }
	         cout<<"\nShow menu?";
	         cin>>k;
         	}
            break;
	 case 2:cout<<"\nEnter the quadratic you want to evaluate 1 or 1+2 and the value of x";
	        cin>>m>>l;
	        switch(m)
	        {
	        case 1:q1.eval(l);
	               break;
	        case 2:q3.eval(l);
	               break;
	        default:cout<<"\nWrong option";
	                break;
	        }
	        break;
	 case 3:cout<<"\nEnter the quadratic you want to solve 1 or 1+2";
            cin>>m;
            switch(m)
            {
             case 1:q1.solution();
                    break;
             case 2:q3.solution();
                    break;
             default:cout<<"\nWrong option";
                     break;
            }
            break;
     default:cout<<"\nWrong option";
     	 	 break;
	 }
	 cout<<"\nShow menu?";
	 cin>>b;
	}
	return 0;
}
