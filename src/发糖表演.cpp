#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
	int n, m,count=0,tmp;
	vector<int>a, b;
	cin >> n;
	for(int i=0;i<n;++i){//需求a
		cin >> tmp;
		a.push_back(tmp);
	}
	cin >> m;
	for (int i = 0; i<m; ++i){//糖b
		cin >> tmp;
		b.push_back(tmp);
	}
	//scanf("%d", &n);
	//vector<int> a(n);//需求
	//for (int i = 0; i<n; i++) scanf("%d", &a[i]);
	//scanf("%d", &m);
	//vector<int> b(m);//糖
	//for (int i = 0; i<m; i++) scanf("%d", &b[i]);
	sort(a.begin(),a.end());
	sort(b.begin(), b.end());
	for (int i = 0, j = 0; i < n&&j < m; j++){//i对应需求，j对应糖
		if (b[j] >= a[i]) {count++; i++;}
		
	}
	cout << count;



}