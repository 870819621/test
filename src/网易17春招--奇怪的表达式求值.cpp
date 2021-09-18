#include<iostream>
using namespace std;
#include<string>

int main(){

	string a;
	cin >> a;
	int temp = a[0]-'0';
	
	for (int i = 1; i < a.size(); i += 2){
		if (a[i] == '+'){ temp += (a[i + 1]-'0'); continue; }
		if (a[i] == '-'){ temp -= (a[i + 1] - '0'); continue; }
		if (a[i] == '*'){ temp *= (a[i + 1] - '0'); continue; }
	}


	cout << temp;

	system("pause");
}