#include<iostream>
using namespace std;
#include<vector>
int main(){
	int n; cin >> n;//数列个数
	while (n--){
		int k; cin >> k;//数列元素个数
		int m_one = 0, m_two = 0, m_four = 0;
		vector<int> a(k);
		for (int i = 0; i < k; i++)
		{
			cin >> a[i];
		}
		for (auto q : a){//遍历数列 统计个数
			if (q % 4 == 0)m_four++;
			else if (q % 2 == 0)m_two++;
			else m_one++;
		}
		if (m_two>0) m_one++;
		if (m_four + 1 >= m_one)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}




	system("pause");
}