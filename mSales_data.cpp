#include"mSales_data.h"
void Sales_data::Sales_add()
{
	Sales_data item1, item2;
	cin >> item1.ISBN >> item2.ISBN;
	if (item1.ISBN == item2.ISBN)
	{
		cin >> item1.sales_book >> item1.sales_Price >> item2.sales_book >> item2.sales_Price;
		int ave = (item1.sales_book * item1.sales_Price + item2.sales_book * item2.sales_Price) / (item1.sales_book + item2.sales_book);
		cout << ave << endl;
	}
}

void Sales_data::Sales_addD()
{
	Sales_data item1;
	cin >> item1.ISBN;
	cin >> item1.sales_book >> item1.sales_Price;
	string ISBN;
	Sales_data item2;
	int cnt = item1.sales_book, sum = item1.sales_book * item1.sales_Price;//cnt��ʾ�鱾������sum��ʾ�ܽ��
	while (cin >> ISBN)
	{
		cin >> item2.sales_book >> item2.sales_Price;
		if (item1.ISBN == ISBN)//15.1�ڴ�����ͬISBN
		{


			sum += item2.sales_book * item2.sales_Price;
			cnt += item2.sales_book;
			int ave = sum / cnt;
			cout << ave << endl;
		}
		else
		{
			cout << "ISBN different!" << endl;//����ͬISBN���� 15.2��
			cout << cnt;
			item1.ISBN = ISBN; item1.sales_book = item2.sales_book; item1.sales_Price = item2.sales_Price;
			cnt = item1.sales_book;
			sum = item1.sales_book * item1.sales_Price;

		}
	}
}