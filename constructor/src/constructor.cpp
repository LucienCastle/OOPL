//============================================================================
// Name        : constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class operations{
	public:
	operations(int a,int b){
		cout<<a+b;
	}
	operations(int a,int b,char c){
			if(c=='-')
			cout<<"\n"<<a-b;
		}
	operations(double a,double b){
			cout<<"\n"<<a*b;
		}
	operations(){
		int a,b;
			cout<"\nEnter 2 numbers";
			cin>>a>>b;
			cout<<"\n"<<a/b;
		}
	operations(int a,int b,int c,int d,int e){
		cout<<"\n"<<(a+b+c+d+e)/5;
	}
};
int main() {
    operations obj1(5,3);
    operations obj2(5,3,'-');
    operations obj3(15.5,15.5);
    operations obj;
    operations obj5(1,2,3,4,5);
	return 0;
}
