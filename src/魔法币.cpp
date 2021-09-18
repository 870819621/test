#include<iostream>
using namespace std;
#include<vector>
int main(){

	int a; cin >> a;
	vector<int> b;
	while (a){
		if (a % 2 == 1){ b.push_back(1); a /= 2; }
		else{ b.push_back(2); a = (a - 2) / 2; }
	}
	vector<int>::reverse_iterator t;
	for (t = b.rbegin(); t != b.rend(); t++){
		cout << *t;
	}

	//system("pause");
}