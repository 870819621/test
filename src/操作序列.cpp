#include<iostream>
using namespace std;
int main(){

	int n = 0;
	cin >> n;
	int a[2 * 100000] = { 0 };
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int tmp = n;
	while (tmp > 1){
		cout << a[tmp-1] << " ";
		tmp -= 2;
	}
	cout << a[0] ;
	if (tmp == 0)tmp = 3;
	else tmp = 2;
	while (tmp < n){
		cout << " " << a[tmp - 1];
		tmp += 2;
	}
	//system("pause");
}