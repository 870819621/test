#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){

	int n; cin >> n;
	vector<int> a; int temp; int dp_len = 0;
	for (int i = 0; i < n; i++){
		cin >> temp;
		a.push_back(temp);
		dp_len += temp;
	}
	if (dp_len % 2 != 0){
		cout << -1; return 0;
	}
	vector<int> b(dp_len / 2 + 1, 0);
	for (auto k:a)
	for (int i = dp_len/2; i >= k; i--){
		b[i] = max(b[i], b[i - k] + k);
	}
	if (b[dp_len / 2] != dp_len / 2) {
		cout << -1; return 0;
	}
	cout << b[dp_len / 2];


	system("pause");
}