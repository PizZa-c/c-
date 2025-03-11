#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
	string ISBN = "";
	int sales_book = 0, sales_Price = 0, Ave_Price = 0;
	void Sales_add();
	void Sales_addD();
};



#endif // !Sales_data
