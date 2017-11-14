#include<iostream>
using namespace std;
typedef long long llong;
#define MAXN 2020

inline void getMin(llong &n, llong x){
	n > x && (n = x);
}
int main(){
	int n; cin >> n;//音调数量

	int v[MAXN] = { 0 }; int cost[MAXN] = { 0 };
	llong ans = 1ll << 63 - 1;
	for (int i = 1; i <= n; i++)//输入数据
	{
		cin >> v[i];
		cost[i] = abs(v[i] - v[i - 1]);
	}
	cost[1] = 0;
	llong dp[MAXN][MAXN] = { 0 };

	//动态规划边缘数据
	/*for (int i = 1; i <= n; i++){
		dp[i][0] = dp[i - 1][0] + cost[i];
		
	}*/
	for (int i = 2; i <= n; i++){
		dp[i][i - 1] = dp[i - 1][i - 2] + cost[i - 1];
	}
	//开始动态规划
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < i - 1; j++){
			dp[i][j] = dp[i - 1][j] + cost[i];
		}
		for (int j = 0; j < i - 1; j++){
			getMin(dp[i][i - 1], dp[i - 1][j] + abs(v[i] - v[j]));
		}
	}
	for (int i = 0; i < n; i++){
		getMin(ans, dp[n][i]);
	}

	cout << ans;


	system("pause");
}