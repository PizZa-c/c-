#include<iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	//Sales_item item1;
	//cin >> item1;//存入isbn号、售出的册数以及销售价格
	//cout << item1 << endl;//输出isbn号、售出的册数以及销售价格
	////练习1.20 读取书籍销售记录并打印

	//Sales_item item1, item2;
	//cin >> item1 >> item2;
	//cout << item1 + item2 << endl;
	////练习1.21  输出两个ISBN号相同的和


	//Sales_item item1, item2, item3, item4;
	//cin >> item1 >> item2 >> item3 >> item4;
	//cout << item1 + item2 + item3 + item4 << endl;
	////练习1.22 读取多个相同isbn 并输出所有记录的和

	Sales_item item1, item2;
	if(cin >> item1)//当前书
	{
		
		while (cin >> item2)
		{
			if (item1.isbn() == item2.isbn())
			{
				item1 += item2;//书号相同就加销售额
			}
			else
			{
				cout << item1 << endl;
				item1 = item2;//不相同就输出结果
			}
		}
		cout << item1 << endl;
	}
	else
	{
		cout << "No data!" << endl;
		return -1;
	}

	//1.23 1.24 1.25 不同ISBN号的输出

	return 0;
}