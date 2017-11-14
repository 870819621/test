#include<iostream>
using namespace std;
#include<vector>
typedef long long llong;
#include<algorithm>
const int mul = 1024;
//inline void insert(vector<llong>& a, llong b){
//	for (int i = 0; i<a.size();i++){
//		if (b > a[i])continue;
//		if (b = a[i])return;
//		if (b < a[i]){ a.insert(a.begin() + i, b); return; }
//	}
//	a.push_back(b); return;
//}
int main(){
	int n; cin >> n;
	vector<int> b;
	int temp; int total = 0;
	for (int i = 0; i < n; i++){
		cin >> temp;
		b.push_back(temp/mul);
		total += temp/mul;
	}
	//sort(b.begin(), b.end());
	//vector<llong>::iterator it = c.end();
	int dp_len = total / 2;
	vector<int> c(dp_len + 1, 0);
	for (auto k : b){
		for (int i = dp_len; i>=k;i--){
			c[i] = max(c[i], c[i - k] + k);
		}
		//sort(c.begin(), c.end());
	}
	cout << (total - c[dp_len])*mul << endl;



	system("pause");
}