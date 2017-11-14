#include<iostream>
using namespace std;
#include<vector>
#include<cstring>

int n;
struct matrix
{
	int a[51][51];
}origin, res,re0;

matrix multiply(matrix x, matrix y)
{
	matrix temp;
	memset(temp.a, 0, sizeof(temp.a));
	for (int i = 0; i<51; i++)
	{
		for (int j = 0; j<51; j++)
		{
			for (int k = 0; k<51; k++)
			{
				temp.a[i][j] += x.a[i][k] * y.a[k][j];
				temp.a[i][j] %= 100;
 			}
		}
	}
	return temp;
}
void calc(int k)
{
	while (k)
	{
		if (k & 1)
			res = multiply(res, origin);
		k >>= 1;
		origin = multiply(origin, origin);
	}
	/*printf("%d次幂结果如下：\n", n);
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<3; j++)
			printf("%8d", res.a[i][j]);
		printf("\n");
	}
	printf("\n");*/
}
int main(){

	int k; cin >> n >> k; 
	memset(re0.a, 0, sizeof(re0.a));
	for (int i = 0; i < n; i++){
		cin >> re0.a[0][i];
	}
	//vector<int> b;
	//for (int i = 0; i < n; i++){//输入
	//	cin >> temp;
	//	b.push_back(temp);
	//}
	/*for (int i = 1; i <= k; i++){
		temp = b[0];
		for (int j = 0; j < n-1; j++){
			b[j] += b[j + 1];
			b[j] %= 100;
		}
		b[n - 1] += temp;
		b[n - 1] %= 100;
	}
	for (int i = 0; i < n - 1;i++){
		cout << b[i]<< " ";

	}cout << b[n - 1];*/

	for(int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (i == j || i == j + 1)
				origin.a[i][j] = 1;
			    
		}
	}
	origin.a[0][n-1] = 1;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (i == j )
				res.a[i][j] = 1;

		}
	}
	calc(k);
	res = multiply(re0, res);
	for (int i = 0; i < n - 1; i++){
		cout << res.a[0][i]<<" ";
	}cout << res.a[0][n - 1];

	system("pause");
}