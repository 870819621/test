#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){

	int n,tmp,d;
	vector<int> a;
	cin >> n;
	while (cin >> tmp){
		a.push_back(tmp);
	}

	sort(a.begin(), a.end());
	d = a[1] - a[0];
	for (int i = 0; i < a.size(); i++){
		if (a[i] == a[0] + d*i)continue;
		else{ cout << "Impossible"; return; }
	}
	cout << "Possible";

	//system("pause");
}