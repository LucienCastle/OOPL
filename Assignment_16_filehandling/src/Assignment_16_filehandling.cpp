//============================================================================
// Name        : Assignment_16_filehandling.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char ch;
	string name,deg;
	int age,i;
	fstream fio;
	fio.open("file.txt",ios::out);
	if(!fio)
		cout<<"\nError in opening the file";
	else
	{
		cout<<"\nWrite into file?(y or n)";
		cin>>ch;
		i=1;
		while(ch=='y'||ch=='Y')
		{
			cout<<"\nEnter name, age and degree course";
			cin>>name>>age>>deg;
			fio<<"\nMember "<<i<<"-\nName         :"<<name<<"\nAge          :"<<age<<"\nDegree course:"<<deg;
			cout<<"\nEnter more?(y or n)";
			cin>>ch;
		}
		fio.close();
	}
	fstream file("file.txt",ios::out|ios::in);
	string line;
	if(!file)
		cout<<"\nError in opening the file";
	else
	{
		cout<<"\nShow contents of file?(y or n)";
		cin>>ch;
		if(ch=='y'||ch=='Y')
		{
			while(getline(file,line))
				cout<<line<<endl;
		}
		file.close();
	}
	return 0;
}
