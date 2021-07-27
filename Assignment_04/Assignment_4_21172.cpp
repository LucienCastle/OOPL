//============================================================================
// Name        : Assignment_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class node{
	int PRN;
	string name;
	node *next;
public:
	node(){
		PRN=0;
		name="";
		next=NULL;
	}
	node(int PRN,string name){
		this->PRN=PRN;
		this->name=name;
		next=NULL;
	}
	friend class pc;
};
class pc{
	node *president,*secretary;
	int count=0;
public:
	pc(){
		president=secretary=NULL;
	}
	pc(int prn,string n){
		node *ptr=new node;
		ptr->PRN=prn;
		ptr->name=n;
		ptr->next=NULL;
		president=secretary=ptr;
	}
	void insertNode(int prn,string n)
	{
		int m;
		char ch;
		node *ptr=new node;
		cout<<"\nShow menu for adding members?(y or n)";
		cin>>ch;
		if(ch=='y')
		{
			cout<<"\nMENU:\n1.Insert president\n2.Insert member\n3.Insert secretary";
			cin>>m;
			switch(m)
			{
			case 1:if(president==NULL&&secretary==NULL)
			       {
					ptr->PRN=prn;
					ptr->name=n;
					ptr->next=NULL;
					president=ptr;
				   }
				   else
				   {
					   ptr->PRN=prn;
					   ptr->name=n;
					   ptr->next=president;
					   president=ptr;
				   }
		           break;
			case 2:if(president==NULL||secretary==NULL)
				   {
					   cout<<"\nInsert president and secretary first";
					   break;
				   }
				   else
				   {
					   ptr->PRN=prn;
					   ptr->name=n;
					   ptr->next=president->next;
					   president->next=ptr;
				   }
			       break;
			case 3:if(president==NULL)
			       {
					   cout<<"\nAdd president first";
			       }
				   else if(secretary==NULL&&president!=NULL)
				   {
					   node *p=new node;
					   p=president;
					   while(p->next!=NULL)
					   {
						   p=p->next;
					   }
					   ptr->PRN=prn;
					   ptr->name=n;
					   ptr->next=NULL;
					   p->next=ptr;
					   secretary=ptr;
				   }
				   else
				   {
					   secretary->next=ptr;
					   ptr->PRN=prn;
					   ptr->name=n;
					   ptr->next=NULL;
					   secretary=ptr;
				   }
			       break;
			default:cout<<"\nWrong choice";
			        break;
			}
		}
	}
	void delNode()
	{
		int m;
		char ch;
		node *ptr=new node;
		cout<<"\nShow menu for deleting members?(y or n)";
		cin>>ch;
		while(ch=='y')
		{
			node *temp=new node;
			cout<<"\nMENU:\n1.Remove president\n2.Remove member\n3.Remove secretary";
			cin>>m;
			switch(m)
			{
			case 1:if(president==NULL)
				   	   cout<<"\nUnderflow";
				   else
				   {
					ptr=president;
					president=president->next;
					ptr->next=NULL;
					delete ptr;
					ptr=NULL;
				   }
				   break;
		    case 2:ptr=president;
		           int p;
		           cout<<"\nEnter PRN of the member";
		           cin>>p;
		           while(ptr!=secretary)
		           {
		        	   temp=ptr->next;
		        	   if(temp->PRN==p)
		        	   {
		        		   ptr->next=temp->next;
		        		   temp->next=NULL;
		        		   delete temp;
		        		   temp=NULL;
		        	   }
		        	   ptr=ptr->next;
		           }
				   break;
			case 3:if(secretary==NULL)
			           cout<<"\nUnderflow";
				   else
				   {
					   ptr=president;
					   while(ptr!=NULL)
					   {
						   if(ptr->next==secretary)
						   {
							   temp=secretary;
							   secretary=ptr;
							   secretary->next=NULL;
							   temp->next=NULL;
							   delete temp;
							   temp=NULL;
						   }
						   else
							   cout<<"\nSecretary not found";
						   ptr=ptr->next;
					   }
				   }
			       break;
		    default:cout<<"\nWrong choice";
					        break;
			}
			cout<<"\nShow menu again?";
			cin>>ch;
		}
	}
	void display()
	{
		if(president==NULL)
			cout<<"\nList is empty";
		else
		{
			node *ptr=president;
			while(ptr!=NULL)
			{
				cout<<"\nPRN :"<<ptr->PRN;
				cout<<"\nName:"<<ptr->name;
				ptr=ptr->next;
				count++;
			}
		}
		cout<<"\nDisplay reverse?(y or n)";
		char ch;
		cin>>ch;
		if(ch=='y'||ch=='Y')
			revdisplay(president);

	}
	void revdisplay(node *ptr)
	{
		if(ptr->next!=NULL)
		{
			revdisplay(ptr->next);
			cout<<"\nPRN :"<<ptr->PRN;
			cout<<"\nName:"<<ptr->name;
		}
		else
		{
			cout<<"\nPRN :"<<ptr->PRN;
			cout<<"\nName:"<<ptr->name;
		}
	}
	void countmem()
	{
		node *ptr=new node;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			count++;
		}
		cout<<"\nNumber of members(incl. president and secretary)in Pinnacle Club are :"<<count+1;
	}
	void concate(pc p)
	{
		node *ptr=new node;
		ptr=president;
		while(ptr->next!=NULL)
		{cout<<"k";
			ptr=ptr->next;
		}
		ptr->next=p.president;
		secretary=p.secretary;
	}
	void sort()
	{
		node *ptr=president, *i, *j, *next_i;
        for(i=ptr;i!=NULL&&i->next!=NULL;i=i->next)
        {
            node *min;
            min=i;
            for(j=i->next;j!=NULL;j=j->next)
            {
                if(j->PRN<min->PRN)
                    min=j;
            }
            if(min!=i)
            {
                int tempp;
                string tempn;
                tempp=min->PRN;
                tempn=min->name;
                min->PRN=i->PRN;
                min->name=i->name;
                i->PRN=tempp;
                i->name=tempn;
            }
        }
        president=ptr;
	}
};
int main() {
	pc p1,p2;
	char ch;
	int t,p;
	string  nm;
	cout<<"\nShow menu?";
	cin>>ch;
	while(ch=='y'||ch=='Y')
	{
		cout<<"\nMENU:\n1.Add members to the club\n2.Remove members from the club\n3.Display details of members\n4.Join 2 Pinnacle clubs\n5.Count members of the club\n6.Sorted pinnacle club by PRN\n7.Exit";
		cin>>t;
		switch(t)
		{
		case 1:cout<<"\nAdd members?";
		       char b;
		       cin>>b;
		       while(b=='y'||b=='Y')
		       {
		    	   cout<<"\nEnter PRN and name of the member";
		    	   cin>>p>>nm;
		    	   p1.insertNode(p,nm);
		    	   cout<<"\nWant to add more?";
		    	   cin>>b;
		       }
		       break;
		case 2:p1.delNode();
			   break;
		case 3:p1.display();
		       break;
		case 4:cout<<"Add members to 2nd club";
		       char op;
		       op='y';
		       while(op=='y'||op=='Y')
		       {
		    	   cout<<"\nEnter PRN and name of the member";
		    	   cin>>p>>nm;
		    	   p2.insertNode(p,nm);
		    	   cout<<"\nWant to add more?";
		    	   cin>>op;
		       }
		       cout<<"\nMembers in the 2nd club are :";
		       p2.display();
		       cout<<"\nMembers in the joint club are :";
		       p1.concate(p2);
		       p1.display();
		       break;
		case 5:p1.countmem();
			   break;
		case 6:p1.sort();
               break;
		case 7:break;
		default:cout<<"\nWrong choice";
				break;
		}
		cout<<"\nShow menu again?";
		cin>>ch;
	}
return 0;
}
/*OUTPUT:

Show menu?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit1

Add members?y

Enter PRN and name of the member1 a

Show menu for adding members?(y or n)y

MENU:
1.Insert president
2.Insert member
3.Insert secretary1

Want to add more?y

Enter PRN and name of the member2 b

Show menu for adding members?(y or n)y

MENU:
1.Insert president
2.Insert member
3.Insert secretary3

Want to add more?y

Enter PRN and name of the member3 c

Show menu for adding members?(y or n)y

MENU:
1.Insert president
2.Insert member
3.Insert secretary2

Want to add more?y

Enter PRN and name of the member4 d

Show menu for adding members?(y or n)y

MENU:
1.Insert president
2.Insert member
3.Insert secretary2

Want to add more?n

Show menu again?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit3

PRN :1
Name:a
PRN :4
Name:d
PRN :3
Name:c
PRN :2
Name:b
Display reverse?(y or n)y

PRN :2
Name:b
PRN :3
Name:c
PRN :4
Name:d
PRN :1
Name:a
Show menu again?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit2

Show menu for deleting members?(y or n)y

MENU:
1.Remove president
2.Remove member
3.Remove secretary1

Show menu again?y

MENU:
1.Remove president
2.Remove member
3.Remove secretary3

Secretary not found
Show menu again?n

Show menu again?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit4
Add members to 2nd club
Enter PRN and name of the member7 e

Show menu for adding members?(y or n)y

MENU:
1.Insert president
2.Insert member
3.Insert secretary1

Want to add more?y

Enter PRN and name of the member5 g

Show menu for adding members?(y or n)y

MENU:
1.Insert president
2.Insert member
3.Insert secretary3

Want to add more?n

Members in the 2nd club are :
PRN :7
Name:e
PRN :5
Name:g
Display reverse?(y or n)n

Members in the joint club are :k
PRN :4
Name:d
PRN :3
Name:c
PRN :7
Name:e
PRN :5
Name:g
Display reverse?(y or n)n

Show menu again?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit5

Number of members(incl. president and secretary)in Pinnacle Club are :9
Show menu again?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit6

Show menu again?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit3

PRN :3
Name:c
PRN :4
Name:d
PRN :5
Name:g
PRN :7
Name:e
Display reverse?(y or n)n

Show menu again?y

MENU:
1.Add members to the club
2.Remove members from the club
3.Display details of members
4.Join 2 Pinnacle clubs
5.Count members of the club
6.Sorted pinnacle club by PRN
7.Exit7

Wrong choice
Show menu again?n
*/
