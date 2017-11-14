#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<map>

int main(){
	map<int, int>mymap;
	int n; cin >> n; int temp;
	/*vector<int> b;
	for (int i = 0; i < n; i++){
	cin >> temp;
	b.push_bacak(temp);
	}*/
	vector<int> b;
	//int a[200] = { 0 };
	for (int i = 0; i < n; i++){
		cin >> temp;
		b.push_back(temp);
		mymap[temp] += 1;
	}
	for (int i = 0; i < n - 1; i++){
			mymap[b[i]] -= 1;
		if (mymap[b[i]] == 0)cout << b[i] << " ";
	}
	cout << b.back();

	system("pause");
}