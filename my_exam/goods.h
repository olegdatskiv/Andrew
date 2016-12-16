#pragma once
#ifndef _GOODS_H_
#define _GOODS_H_
#include<iostream>
#include<string>
using namespace std;
class Goods
{
private:
	int number;
	string name;
	double price;
public:
	Goods()
	{
		this->number = 0;
		this->name = "";
		this->price = 0;
	}
	Goods( int number, string name ,double  price)
	{
		this->number = number;
		this->name = name;
		this->price = price;
	}
	

	double get_price()
	{
		return this->price;
	}
    
	int  get_number()
	{
		return this->number;
	}

	void set_number(int number1) {
		this->number = number1;
	}


	void input()
	{
		cout << "num of this product : ";
		cin >> this->number;
		cout << " \n describe this product : ";
		cin >> this->name;
		cout << " \n how much it cost ($): ";
		cin >> this->price;
		cout << "\n________________________________\n";
	
	
	}

	
	void print()
	{
		cout << "\n num:  ";
		cout << this->number;
		cout << "\n this is :  ";
		cout << this->name;
		cout << "\n its price  :  ";
		cout << this->price;
		cout << " $";
		cout << "\n";
	}






};

#endif