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
		it = a.find(temp);    //���Ҽ�ֵΪtemp��Ԫ��
		if (it != a.end())    //�ҵ�
		{
			ans += temp.size()*temp.size();
			a.erase(temp);
		}
		
	}

	cout << ans;

	system("pause");

}