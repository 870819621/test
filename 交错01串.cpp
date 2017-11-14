#include<iostream>
using namespace std;
#include<string>

int main(){
	string a;
	cin >> a;
	int resMax = 1;
	int tmp=1;
	for (int i = 1; i < a.size(); i++){
		
		if (a[i] == a[i - 1]){ 
			if (tmp>resMax) resMax = tmp;
			tmp = 1;
		}
		else{
			tmp++;
		}

	}
	if (tmp>resMax) resMax = tmp;
	cout << resMax;


	//system("pause");
}