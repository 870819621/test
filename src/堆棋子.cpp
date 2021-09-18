#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

struct Point
{
	int x = 0;
	int y = 0;
}A[55];

int n;
vector<vector<int> > vvec;
int dist(int x, int y, const Point& obj)
{
	return abs(x - obj.x) + abs(y - obj.y);
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> A[i].x;
	for (int i = 1; i <= n; ++i)
		cin >> A[i].y;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			vector<int> tmp;
			for (int k = 1; k <= n; ++k)
			{
				tmp.push_back(dist(A[i].x, A[j].y, A[k]));//因为聚合点的xy坐标必定在已有点的xy坐标中
			}
			sort(tmp.begin(), tmp.end());
			vvec.push_back(tmp);
		}
	}
	for (int k = 1; k <= n; ++k)
	{
		int ans = 0x17171717;
		for (int i = 0; i<vvec.size(); ++i)
		{
			int res = 0;
			for (int j = 0; j<k; ++j)
				res += vvec[i][j];
			ans = min(ans, res);
		}
		if (k == 1)
			cout << ans;
		else
			cout << " " << ans;
	}
	return 0;
}