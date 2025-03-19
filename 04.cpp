#include<iostream>
using namespace std;
#include<vector>
int main()
{
	/*int i = 1;
	int* p = &i;
	vector<int*> vec(*p);
	if (*vec.begin() == *((vec.begin)()))cout << "1";
	if (*vec.begin() + 1 == ((*((vec.begin)())) + 1))cout << "1";*/
	//练习4.2
	//int i = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);
	////if (i == 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2)cout<<i;
	//while (cin >> i)
	//{
	//	if (i % 2)cout << "是奇数" << endl;
	//	else
	//	{
	//		cout << "是偶数" << endl;
	//	}
	//}//4.6判断奇偶
	/*int i = 0, j = 4, k = 3, c = 99;
	c= i!= j <k;
	cout << c;*/
	//4.12

	//int i; double d;
	////d = i = 3.5; cout << d;
	//int* pi =&i;
	//i = 3;
	//*pi =i=0; cout << *pi;

	//vector<string>::iterator iter;
	//iter->empty(); *++iter;
	//int flag = 0;
	//vector<int>v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//for (auto a = v.begin(); a != v.end(); a++)
	//{
	//	((*a % 2 == 0) ? flag=0 : flag=1 );
	//	if (flag == 1)//找到奇数把他*2
	//	{
	//		*a *= 2;
	//	}
	//	
	//}		
	//for (auto a : v)cout << a;
	//练习4.21

	//int a = 0;
	/*while (cin >> a)
	{
		cout << ((a > 90) ? "high pass"
			: (a > 75) ? "low pass"
			: (a > 60) ? "pass" : "fail");
		cout << endl;
	}*/

	//while (cin >> a)
	//{
	//	if (a > 90)cout << "high pass";
	//	else if (a > 75)cout << "low pass";
	//	else if (a > 60)cout << "pass";
	//	else
	//		cout << "fail";
	//	cout << endl;
	//}

	//const int p = 10;
	//const int *a = &p;
	////const_cast<int*>(a);
	//const int x = 19; a = &x;
	//cout << *a;
	/*string* sss;
	int i; double d; const string* ps; char* pc; void* pv;
	pv = static_cast<void*>(const_cast<string*>(ps));
	i = static_cast<int>(*pc);
	pv = static_cast<void*>(&d);
	pc = static_cast<char*>(pv);*/
	//4.37


	//int j = 5, i = 2;
	//double xx = static_cast<double>(j / i);


	return 0;
}