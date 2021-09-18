#include<iostream>
using namespace std;
#include<vector>
#include<set>
int main(){

	set<double>a;
	int w, x, y, z; cin >> w >> x >> y >> z;
	for (int i = w; i <= x; i++){
		for (int j = y; j <= z; j++){
			a.insert(i*1.0000/j);
		}

	}
	cout << a.size();
	

	system("pasue");

}