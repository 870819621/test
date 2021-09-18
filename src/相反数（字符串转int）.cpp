
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s, s1;
	cin >> s;
	s1 = s;
	reverse(s.begin(), s.end());
	int a = atoi(s.c_str());
	int b = atoi(s1.c_str());
	cout << a + b << endl;
	return 0;
}