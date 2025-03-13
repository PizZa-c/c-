#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	//string s="aaa bbb ccc";
	//while (getline(cin,s))
	//{
	//	cout << s << endl;//输出读取的每一行
	//}
	//while (cin >> s)
	//{
	//	cout << s << endl;//输出读取的每一个单词
	//}
	//3.2读入一整行 读入一个词

	/*string s1="",s2="";
	getline(cin, s1);
	getline(cin, s2);
	if (s1.size() < s2.size())
	{
		cout << s2 << endl;
	}
	else if(s1.size() > s2.size())
	{
		cout << s1 << endl;
	}*/
	//3.4比较两个字符串是否等长，如果不等长输出长度较大的那个字符串

	/*string s1="", ss="";
	while (cin >> s1)
	{
		ss += s1+" ";
	}
	cout << ss << endl;*/
	//3.5读入多个字符串并连接到一起，用空格分开

	//string s = "abcdefg";
	//for (char& c : s) c = 'X';//范围for循环
	//cout << s << endl;
	//3.6将字符串用X代替

	//for (int i = 0; i <= s.size(); i++)
	//{
	//	s[i] = 'X';
	//}//传统for循环
	//int i = 0;
	//while (i <= s.size())
	//{
	//	s[i++] = 'X';
	//	
	//}//while循环
	//cout << s << endl;
	//3.8while 和 for循环重写第一题

	//string a="";
	//getline(cin, s);
	//for (char c : s)
	//{
	//	
	//	if (!ispunct(c))
	//	{
	//		a += c;//把不是符号的字符保留
	//	}
	//}
	//3.10读入一个包含符号的字符串，把去除符号后的字符保留
	//cout << a << endl;

	/*vector<vector<int>> r11;
	vector<string> r1(10,"NULL");*/

	/*int i = 0;
	vector<int> mmb;
	vector<string> ss;
	string s22;*/
	/*while (cin >> i)
	{
		mmb.push_back(i);
	}
	for (auto i1 : mmb)cout << i1 << endl;*/
	/*while (cin >> s22)
	{
		ss.push_back(s22);
	}
	for (auto SsS : ss)
	{
		cout << SsS << endl;
	}*/
	//3.14 3.15 存入一组整数 字符串

	/*string s; vector<string> s1;
	while (cin >> s)
	{
		for (char& c : s)
		{
			c = toupper(c);
		}
		s1.push_back(s);

	}
	for (auto a : s1)
	{
		cout << a << endl;
	}*/
	//3.17将读取的字符串变大写

	/*vector<int> a;
	int i = 0;
	while (cin >> i)
	{
		a.push_back(i);
	}
	i = 0; int n = a.size();*/
	//for (i = 0; i <= n; i++)
	//{
	//	if (i + 1 < n)
	//	{
	//		cout << a[i] + a[i + 1] << endl;//相邻两个数和
	//	}
	//}
	//int j = n-1;
	//for (i = 0; i <= n; i++)
	//{
	//	if (j > i)
	//	{
	//		cout << a[i] + a[j--] << endl;
	//		
	//	}
	//	
	//}
	//3.20第一个和最后一个的和

	/*vector<int> v(10,2);
	for (auto a = v.begin(); a != v.end(); a++)
		*a *= 2;*/
		//3.23全部变成两倍

		//int num = 0; vector<int>v;
		//while (cin >> num)
		//{
		//	v.push_back(num);
		//}
		//for (auto a = v.begin(), a2 = v.end()-1; a != v.end(); a++)
		//{
		//	
		//	if (a < a2)cout << *a + *a2-- << endl;
		//}
		//3.24 重写94最后一个练习

		//vector<int>v(11, 0); 
		//int score = 0;
		//while (cin >> score)
		//{
		//	auto a = v.begin();
		//	if(score<=100)
		//	(*(a + score / 10))++;//必须加括号
		//}
		//for (auto a : v)cout << a << endl;
		////3.25用迭代器完成划分分数程序

	return 0;
}