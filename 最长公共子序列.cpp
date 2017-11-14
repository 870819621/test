#include <stdio.h>
#include <algorithm>
#include <string>
#include <set>
#include<iostream>

using namespace std;

char str[55];

void read() {
	cin >> str;
}

bool test(const string& s) {
	int cnt = 0;
	for (int i = 0; s[i]; ++i) {
		s[i] == '(' ? ++cnt : --cnt;
		if (cnt < 0) {
			return false;
		}
	}

	return true;
}

void work() {
	set<string> record;
	for (int i = 1; str[i + 1]; ++i) {
		string tmp(str);
		tmp.erase(i, 1);
		for (int j = 1; str[j]; ++j) {
			if (str[i] == str[j]) continue;
			string s(tmp);
			s.insert(j, 1, str[i]);
			if (test(s)) {
				record.insert(s);
			}
		}
	}
	printf("%lu\n", record.size());
}

int main() {
	read();
	work();
	system("pause");
	return 0;
}