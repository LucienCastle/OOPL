//============================================================================
// Name        : Assignment_23_dequeue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> dq;
	deque<int>::iterator it;
	char ch;
	int m,n;
	cout<<"\nShow menu?(y or n)";
	cin>>ch;
	while(ch=='y'||ch=='Y')
	{
		cout<<"\nMenu:\n1.Insert at front\n2.Insert at rear\n3.Delete from front\n4.Delete from rear\n5.Display dequeue\n6.Exit";
		cin>>m;
		switch(m)
		{
		case 1:cout<<"\nEnter element to be inserted at the front";
			   cin>>n;
			   dq.push_front(n);
			   break;
		case 2:cout<<"\nEnter element to be inserted at rear";
		   	   cin>>n;
		   	   dq.push_back(n);
		   	   break;
		case 3:if(!dq.empty())
			   	   dq.pop_front();
			   else
				   cout<<"\nNo elements to delete";
			   break;
		case 4:if(!dq.empty())
		   	   	   dq.pop_back();
		   	   else
		   		   cout<<"\nNo elements to delete";
		   	   break;
		case 5:cout<<endl;
			   for(it=dq.begin();it!=dq.end();it++)
			   {
					cout<<*it<<" ";
			   }
			   break;
		case 6:return 0;
		default:cout<<"\nWrong option";
			    break;
		}
		cout<<"\nShow menu again(y or n)";
		cin>>ch;
	}
	return 0;
}
