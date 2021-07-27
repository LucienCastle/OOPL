//============================================================================
// Name        : Assignment_02_extra.cpp
// Author      : Sumit Patil
// Roll number : 21172
// Description : Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class String{
	int len;
public:
	char array[100];
	String(){
		len=0;
		for(int i=0;i<100;i++)
		{if(array[i-1]!='.')
		   {cin>>array[i];
		   len++;}
		else break;

		}
	}
	void length()
	{
		cout<<"\nLength of entered string is :"<<len-1;
	}
	void reverse()
	{
		cout<<"\nReverse of the entered array is :\n";
		for(int i=len-1;i>=0;i--)
				{
			if(array[i]!='.')
					cout<<array[i];
			else continue;
				}
	}
	void freq(char a)
	{
		int count=0;;
		for(int i=0;i<len-1;i++)
			{
				if(array[i]==a)
					count++;
			}
		cout<<"\nThe character "<<a<<" occurs "<<count<<" times";
	}
	void palindrome()
	{
		char flag=1;
		for(int i=0;i<(len-1)/2;i++)
		{
			if(array[i]==array[len-2])
				flag=1;
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			cout<<"\nEntered string isn't palindrome";
		else
			cout<<"\nIt is palindrome";

	}
	void del(int n,int l)
	{
		if(l<len-1&&n>=0&&n<len-1&&l>=0)
		{
			for(int i=0;i<len-1;i++)
					{
				if(i>=n&&i<=n+l)
					continue;
				else
					cout<<array[i];
					}
		}

	}
	void chardelete(char c)
	{
		for(int i=0;i<len-1;i++)
		{
			if(array[i]==c)
				continue;
			else
				cout<<array[i];
		}
	}
	void checksubs(String s)
	{
		int flag=0,l;
		for(int i=0;i<len-1;i++)
		{
			if(array[i]==s.array[0])
			{
				l=i;
				for(int j=0;j<s.len-1;j++)
				{
					if(array[i+j]==s.array[j])
				     	flag=1;
					else
					{
						flag=0;
						break;
					}
				}

			}
		}
		if(flag==1)
		    cout<<"\nSubstring is found at "<<l<<" to "<<(l+s.len-1)-1;
		else
		    cout<<"\nSubstring not found";
    }
	void equal(String &a)
	{
		int flag=0;
		for(int i=0;i<len-1;i++)
		{
			if(array[i]==a.array[i])
				flag=1;
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<"\nBoth strings are equal";
		else
			cout<<"\nThe strings aren't equal";
	}
};
int main() {
	int i;
	cout<<"\nEnter the string to show the operations menu(put . at the end):";
    String s;
    cout<<"\nEnter another";
    String s1;
    Menu:
	cout<<"\n1.Find length of the string entered\n2.Reverse the string\n3.Find the occurrences of a character\n4.Check if palindrome\n5.Delete string from the start\n6.Delete occurrences of a character\n7.Check substring\n8.Check equal\n9.Exit";
	cin>>i;
	switch(i)
	{
	case 1:s.length();
	       break;
	case 2:s.reverse();
	       break;
	case 3:char a;
		   cout<<"\nEnter the character whose occurrences you want to find :";
	       cin>>a;
		   s.freq(a);
	       break;
	case 4:s.palindrome();
	       break;
	case 5:int k,l;
		   cout<<"\nEnter the index from where you want to start deleting";
	       cin>>k>>l;
	       s.del(k,l);
	       break;
	case 6:char b;
	       cout<<"\nEnter the character whose occurrences you want to delete :";
           cin>>b;
	       s.chardelete(b);
           break;
	case 7:s.checksubs(s1);
	       break;
	case 8:s.equal(s1);
		   break;
	case 9:break;
	default:cout<<"\nYou've entered wrong option";
	        break;
	}
	char op;
	option:
	cout<<"\nShow menu again?(y or n)";
	cin>>op;
	if(op=='y'||op=='Y')
	   	goto Menu;
	else if(op=='n'||op=='N')
	   	goto Exit;
	else
	   	goto option;
	Exit:
	return 0;
}


/*OUTPUT:

Enter the string to show the operations menu(put . at the end):stringa.

Enter anotherstr.

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit1

Length of entered string is :7
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit2

Reverse of the entered array is :
agnirts
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit3

Enter the character whose occurrences you want to find :a

The character a occurs 1 times
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit4

Entered string isn't palindrome
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit5

Enter the index from where you want to start deleting1 2
singa
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit6

Enter the character whose occurrences you want to delete :s
tringa
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit7

Substring is found at 0 to 2
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit8

The strings aren't equal
Show menu again?(y or n)y

1.Find length of the string entered
2.Reverse the string
3.Find the occurrences of a character
4.Check if palindrome
5.Delete string from the start
6.Delete occurrences of a character
7.Check substring
8.Check equal
9.Exit9

Show menu again?(y or n)n

*/
