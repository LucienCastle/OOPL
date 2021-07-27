//============================================================================
// Name        : Assignment_14_exception.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
using namespace std;
int main() {
	int age,vehicle_wheels;
	float income;
	string city;
	while(1)
	{
		cout<<"\nEnter name of city :";
		cin>>city;
		cout<<"\nEnter age, income, and vehicle :";
		cin>>age>>income>>vehicle_wheels;
		try{
			if(city=="Pune"||city=="Mumbai"||city=="Banglore"||city=="Chennai")
				cout<<"\nCity :"<<city;
			else
				throw city;
		}catch(string &city){
			 cout<<"\nCity should be one of Pune, Mumbai, Chennai or Banglore, you've entered "<<city;
			 return -1;
		 }
		try{

			if(age<18||age>55)
				throw age;
			else
				cout<<"\nAge :"<<age;
		}catch(int n){
			cout<<"\nYour age "<<n<<" isnt within the specified limits";
			return -1;
		}
		try{
			if(vehicle_wheels!=4)
				throw vehicle_wheels;
			else
				cout<<"\nVehicle :"<<vehicle_wheels<<" wheeler";
		}catch(int n){
			cout<<"\nVehcile should be 4 wheeler";
			return -1;
		}
		try{
			if(income<50000||income>100000)
				throw income;
			else
				cout<<"\nIncome :"<<income;
		}
		catch(float income){
			 	cout<<"\nYour income "<<income<<" isnt within the specified limits";
			 	return -1;
		 	}
	}
	return 0;
}
