#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

vector<int> findAnagrams(string s, string p) {
	int slen = s.size();
	int plen = p.size();
	vector<int> result;

	unordered_map<char, int> hash;
	for (int i = 0; i<plen; i++) hash[p[i]]++;

	int right = 0; int left = 0; int count = plen;
	while (right<slen) {

		if (hash[s[right]] >= 1) {
			count--;
		}
		hash[s[right]]--;
		right++;

		if (count == 0) result.push_back(left);

		if (right - left == plen) {
			if (hash[s[left]] >= 0) {
				count++;
			}
			hash[s[left]]++;
			left++;
		}
	}
	return result;
}

int main() {
	vector<int> result = findAnagrams("cbaebabacd", "abc");
	return 0;
}