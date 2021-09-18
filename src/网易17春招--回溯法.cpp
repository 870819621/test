#include<iostream>
using namespace std;
#include<string>
string job[7];
int n;
int ans;
bool check(char c, string nowjob){//判断这份工作是否有人选了
	for (auto i : nowjob){
		if (c == i)return 1;//被选了
	}return 0;//没被选
}
void dfs(int pos,string nowjob){
	if (pos == n){
		ans++;
		return;
	}

	for (auto i:job[pos]){
		if (check(i, nowjob) == 0){
			dfs(pos+1,nowjob+i);
		}

	}

}

int main(){

	cin >> n; 
	for (int i = 0; i < n; i++){
		cin>>job[i];
	}
	string t = "";
	dfs(0, t);
	cout << ans;
	
	system("pause");
}