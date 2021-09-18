#include<iostream>
using namespace std;
#include<set>
#include<string>
int main(){

	int n, m; cin >> n >> m;

	set<string> a; string temp;
	for (int i = 0; i < n; i++){
		cin >> temp;
		a.insert(temp);
	}
	set<string>::iterator it; int ans = 0;
	for (int i = 0; i < m; i++){
		cin >> temp;
		it = a.find(temp);    //查找键值为temp的元素
		if (it != a.end())    //找到
		{
			ans += temp.size()*temp.size();
			a.erase(temp);
		}
		
	}

	cout << ans;

	system("pause");

}