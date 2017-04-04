#include<iostream>
#include<string>
using namespace std;

string countAndSay(int n) {
	string a = "1";
	while (--n) {
		int j = 0;
		string tmp;
		for (int i = 0; i < a.size(); i++) {
			if (i + 1 == a.size() || a[i + 1] != a[j]) {
				tmp += to_string(i + 1 - j) + a[j];
				j = i + 1;
			}
		}
		a = tmp;
	}
	return a;
}

int main() {
	string result = countAndSay(6);
	return 0;
}