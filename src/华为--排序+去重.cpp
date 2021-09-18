#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){

	int n; cin >> n; int IN_num;
	vector<int> b;
	for (int i = 0; i < n; i++){
		cin >> IN_num;
		b.push_back(IN_num);
	}
	
	
	sort(b.begin(), b.end());
	b.erase(unique(b.begin(), b.end()), b.end());
	/*for (auto k : b)
		cout << k << endl;*/
	for (int i = 0; i < b.size(); i++){
		cout << b[i] << endl;
	}

	//system("pause");
}