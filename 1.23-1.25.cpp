#include<iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	//Sales_item item1;
	//cin >> item1;//����isbn�š��۳��Ĳ����Լ����ۼ۸�
	//cout << item1 << endl;//���isbn�š��۳��Ĳ����Լ����ۼ۸�
	////��ϰ1.20 ��ȡ�鼮���ۼ�¼����ӡ

	//Sales_item item1, item2;
	//cin >> item1 >> item2;
	//cout << item1 + item2 << endl;
	////��ϰ1.21  �������ISBN����ͬ�ĺ�


	//Sales_item item1, item2, item3, item4;
	//cin >> item1 >> item2 >> item3 >> item4;
	//cout << item1 + item2 + item3 + item4 << endl;
	////��ϰ1.22 ��ȡ�����ͬisbn ��������м�¼�ĺ�

	Sales_item item1, item2;
	if(cin >> item1)//��ǰ��
	{
		
		while (cin >> item2)
		{
			if (item1.isbn() == item2.isbn())
			{
				item1 += item2;//�����ͬ�ͼ����۶�
			}
			else
			{
				cout << item1 << endl;
				item1 = item2;//����ͬ��������
			}
		}
		cout << item1 << endl;
	}
	else
	{
		cout << "No data!" << endl;
		return -1;
	}

	//1.23 1.24 1.25 ��ͬISBN�ŵ����

	return 0;
}