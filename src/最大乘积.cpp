#include<vector>
#include<iostream>
using namespace std;
int main(){
	void insert_1(vector<int> &,int);
	void insert_2(vector<int> &, int);
	vector<int> a; int tmp = 0;
	while (cin >> tmp){
		a.push_back(tmp);
	}
	vector<int> b; vector<int> c; vector<int> d; vector<int> e;
	int count = 0;//��¼0�ĸ���
	for (int p = 0; p < a.size(); ++p){
		if (a[p]>0){
			insert_1(b, a[p]);//�������
			insert_2(d, a[p]);//��С����
		}
		if (a[p] == 0) ++count;
		if (a[p]<0){
			insert_1(e, a[p]);//�����
			insert_2(c, a[p]);//��С����
		}
	}
	if (b.size() == 0){
		if (count>0){
			cout << 0;
		}
		else{
			cout << e[0] * e[1] * e[2];
		}
	}
	else if (b.size() <= 2){
		if (c.size() <= 1) cout << 0;
		else  cout << c[0] * c[1] * b[0];
	}
	else {
		if (c.size() <= 1) cout << b[0] * b[1] * b[2];
		else cout << (((_Longlong)b[0] * b[1] * b[2] > (_Longlong)c[0] * c[1] * b[0]) ? (_Longlong)b[0] * b[1] * b[2] : (_Longlong)c[0] * c[1] * b[0]);
	}
	
	system("pause");
}
void insert_1(vector<int>& a ,int tmp){
	if (a.size() == 0){ a.push_back(tmp); return; }
	for (int i = 0; i<a.size(); ++i){
		if (tmp >= a[i]) {
			a.insert(a.begin() + i, tmp); break;
		}
		if (i == a.size() - 1){ a.push_back(tmp); break; }
	}
	while (a.size()>3){//ȷ��ֻ������Ԫ��
			a.pop_back();
		}
	return;
}
void insert_2(vector<int>& a, int tmp){
	if (a.size() == 0){ a.push_back(tmp); return; }
	for (int i = 0; i<a.size(); ++i){
		if (tmp <= a[i]) {
			a.insert(a.begin() + i, tmp); break;
		}
		if (i == a.size() - 1){ a.push_back(tmp); break; }
	}
	while (a.size()>3){//ȷ��ֻ������Ԫ��
		a.pop_back();
	}
	return;
}