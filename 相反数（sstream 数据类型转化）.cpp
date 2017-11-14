#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
template<typename A, typename B>
B StrToInt(A a){
	stringstream ss;
	B b;
	ss << a;
	ss >> b;
	return b;
}
int main(){
	string s1;
	string s2;
	cin >> s1;
	s2 = s1;
	reverse(s1.begin(), s1.end());
	int a = StrToInt<string, int>(s1);
	int b = StrToInt<string, int>(s2);
	//int a = atoi(s1.c_str());
	//int b = atoi(s2.c_str());
	cout << a + b << endl;
	return 0;
}