#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	//string s="aaa bbb ccc";
	//while (getline(cin,s))
	//{
	//	cout << s << endl;//�����ȡ��ÿһ��
	//}
	//while (cin >> s)
	//{
	//	cout << s << endl;//�����ȡ��ÿһ������
	//}
	//3.2����һ���� ����һ����

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
	//3.4�Ƚ������ַ����Ƿ�ȳ���������ȳ�������Ƚϴ���Ǹ��ַ���

	/*string s1="", ss="";
	while (cin >> s1)
	{
		ss += s1+" ";
	}
	cout << ss << endl;*/
	//3.5�������ַ��������ӵ�һ���ÿո�ֿ�

	//string s = "abcdefg";
	//for (char& c : s) c = 'X';//��Χforѭ��
	//cout << s << endl;
	//3.6���ַ�����X����

	//for (int i = 0; i <= s.size(); i++)
	//{
	//	s[i] = 'X';
	//}//��ͳforѭ��
	//int i = 0;
	//while (i <= s.size())
	//{
	//	s[i++] = 'X';
	//	
	//}//whileѭ��
	//cout << s << endl;
	//3.8while �� forѭ����д��һ��

	//string a="";
	//getline(cin, s);
	//for (char c : s)
	//{
	//	
	//	if (!ispunct(c))
	//	{
	//		a += c;//�Ѳ��Ƿ��ŵ��ַ�����
	//	}
	//}
	//3.10����һ���������ŵ��ַ�������ȥ�����ź���ַ�����
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
	//3.14 3.15 ����һ������ �ַ���

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
	//3.17����ȡ���ַ������д

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
	//		cout << a[i] + a[i + 1] << endl;//������������
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
	//3.20��һ�������һ���ĺ�

	/*vector<int> v(10,2);
	for (auto a = v.begin(); a != v.end(); a++)
		*a *= 2;*/
		//3.23ȫ���������

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
		//3.24 ��д94���һ����ϰ

		//vector<int>v(11, 0); 
		//int score = 0;
		//while (cin >> score)
		//{
		//	auto a = v.begin();
		//	if(score<=100)
		//	(*(a + score / 10))++;//���������
		//}
		//for (auto a : v)cout << a << endl;
		////3.25�õ�������ɻ��ַ�������

	return 0;
}