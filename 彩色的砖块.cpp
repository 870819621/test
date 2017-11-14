#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main(){
	string a ;
	cin >> a;
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	if (a.size() == 1)cout << 1;
	else if(a.size() == 2)cout << 2;
	else cout << 0;

	//system("pause");
}