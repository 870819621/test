#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){

	int t_num; cin >> t_num;
	vector<int> tx, ty; int temp;
	for (int i = 0; i < t_num; i++){
		cin >> temp;
		tx.push_back(temp);
	}
	for (int i = 0; i < t_num; i++){
		cin >> temp;
		ty.push_back(temp);
	}
	int gx, gy; cin >> gx >> gy;
	int walkTime, taxiTime; cin >> walkTime >> taxiTime;

	vector<int> t_Time;//选择这辆车的时间
	for (int i = 0; i < t_num; i++){
		t_Time.push_back(taxiTime*abs(tx[i] - gx) + taxiTime*abs(ty[i] - gy)+walkTime*abs(tx[i])+walkTime*abs(ty[i]));
	}
	sort(t_Time.begin(), t_Time.end());
	cout << min(walkTime*abs(gx) + walkTime*abs(gy), t_Time[0]) << endl;





	system("pause");
}