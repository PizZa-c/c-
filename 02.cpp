#include<iostream>
using namespace std;
#include<string>
#include"mSales_data.h"
//struct Sales_data
//{
//	string ISBN="";
//	int sales_book=0, sales_Price=0, Ave_Price=0;
//};
//2.40自己的理解写Sales_data
//1.51节 读取两个ISBN相同的Sales_item对象，输出他们的和
//读取多个ISBN相同的销售记录，输出所有记录的和
// 
//1.52节读取多条销售记录并记录每个ISBN有几条销售记录
//输入表示多个ISBN来测试上个程序
//void Sales_add(Sales_data item1, Sales_data item2)
//{
//	
//	cin >> item1.ISBN >> item2.ISBN;
//	if (item1.ISBN == item2.ISBN)
//	{
//		cin >> item1.sales_book >> item1.sales_Price >> item2.sales_book >> item2.sales_Price;
//		int ave = (item1.sales_book * item1.sales_Price + item2.sales_book * item2.sales_Price) / (item1.sales_book + item2.sales_book);
//		cout << ave << endl;
//	}
//}
//读取两个ISBN相同的对象并输出他们的和

//读取多个ISBN相同的对象并输出和
//void Sales_addD(Sales_data item1)
//{
//	cin >> item1.ISBN;
//	cin >> item1.sales_book >> item1.sales_Price;
//	string ISBN;
//	Sales_data item2;
//	int cnt = item1.sales_book,sum= item1.sales_book * item1.sales_Price;//cnt表示书本数量，sum表示总金额
//	while (cin >> ISBN)
//	{
//		cin >> item2.sales_book >> item2.sales_Price;
//		if (item1.ISBN == ISBN)//15.1节处理相同ISBN
//		{
//
//			
//			sum += item2.sales_book * item2.sales_Price;
//			cnt += item2.sales_book;
//			int ave = sum / cnt;
//			cout << ave << endl;
//		}
//		else
//		{
//			cout << "ISBN different!" << endl;//处理不同ISBN操作 15.2节
//			cout << cnt;
//			item1.ISBN = ISBN; item1.sales_book = item2.sales_book; item1.sales_Price = item2.sales_Price;
//			cnt = item1.sales_book;
//			sum = item1.sales_book * item1.sales_Price;
//			
//		}
//	}
//}


int main()
{
	//unsigned u = 10, u2 = 42;
	//cout << u2 - u << endl;//32
	//cout << u - u2 << endl;//非常大的数

	//int i = 10, i2 = 42;
	//cout << i2 - i << endl;//32
	//cout << i - i2 << endl;//-32
	//cout << i - u << endl;//0
	//cout << u - i << endl;//0
	//2.3练习

	//cout << "2M" << endl;
	//cout << "2" << "\t" << "M" << endl;
	////2.8练习

	//const int i = 42;
	//auto j = i;//int 
	//const auto& k = i; auto* p = &i;
	//const auto j2 = i, &k2 = i;

	/*doupocangqiong.book_No = "doupo";
	doupocangqiong.sales_Number = 17; doupocangqiong.sales_Price = 100;
	cout << doupocangqiong.book_No << doupocangqiong.sales_Number << doupocangqiong.sales_Price << endl;*/

	Sales_data item1, item2;
	//item1.Sales_add();
	//Sales_add(item1, item2);
	//Sales_addD(item1);
	item1.Sales_addD();
	return 0;
}
