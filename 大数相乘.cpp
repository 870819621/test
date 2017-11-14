#include<iostream>
using namespace std;
#include<string>
int main(){
	string str1 , str2;
	cin >> str1 >> str2;
	int a[500], b[500], c[500] = { 0 }; int len1 = str1.size(), len2 = str2.size(); int k = 0;
	for (int p = 0; p < str1.size(); ++p)
		a[len1-1-p] = str1[p] - '0';
	
	for (int p = 0; p < str2.size(); ++p)
		b[len2-1-p] = str2[p] - '0';

	for (int p = 0; p < str1.size(); ++p){
		for (int q = len2 - 1; q >= 0; --q){
			c[p + q] += a[p] * b[q];

			for (k = 0; k < len1 + len2; ++k)
			if (c[k] >= 10){
				c[k + 1] += c[k] / 10;
				c[k] %= 10;
			}
		}
	}
	for (k=len1+len2+3; c[k] == 0; --k);
	for (; k >= 0; --k)cout << c[k];
	system("pause");
}