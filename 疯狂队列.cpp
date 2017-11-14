#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){

	int n; cin >> n;
	vector<int> a;
	int m;
	while (cin >> m){
		
		a.push_back(m);
		if (cin.get() == '\n')break;
	}
	sort(a.begin(), a.end());
	vector<int> b;
	vector<int>::iterator t1, t2;
	t1 = a.begin(); t2 = a.end()-1;
	b.push_back(*t1); t1++;
	while (t1<=t2){//相等没有差距 所以可以重复加入
		b.insert(b.begin(), *t2); t2--; if (t2 < t1)break;
	    b.push_back(*t2); t2--;  if (t2 < t1)break;
		b.insert(b.begin(), *t1); t1++; if (t2 < t1)break;
		b.push_back(*t1); t1++;  if (t2 < t1)break;
	}
	int ans1 = 0;
	for (int i = 1; i < b.size(); i++){
		ans1 += abs(b[i] - b[i - 1]);
	}
	b.clear();
	t1 = a.begin(); t2 = a.end() - 1;
	b.push_back(*t2); t2--;
	while (t1 <= t2){//相等没有差距 所以可以重复加入
		b.insert(b.begin(), *t1); t1++; if (t2 < t1)break;
		b.push_back(*t1); t1++;  if (t2 < t1)break;
		b.insert(b.begin(), *t2); t2--; if (t2 < t1)break;
		b.push_back(*t2); t2--;  if (t2 < t1)break;
	}
	int ans2 = 0;
	for (int i = 1; i < b.size(); i++){
		ans2 += abs(b[i] - b[i - 1]);
	}
	cout << max(ans1,ans2);


	//system("pause");
}