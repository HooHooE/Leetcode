#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int findPairs(vector<int>& nums, int k) {
	int len = nums.size();
	if (len == 0) return 0;
	unordered_map<int, int> hashmap;
	hashmap[nums[0]] = 1;
	int result = 0;
	int t1, t2;
	for (int i = 1; i<len; i++) {
		if (k == 0) {
			unordered_map<int, int>::const_iterator it;
			it = hashmap.find(nums[i]);
			if (it != hashmap.end()) {
				if (it->second < 2) {
					hashmap[nums[i]]++;
					result++;
				}
			}
			else {
				hashmap[nums[i]] = 1;
			}
		}
		else {
			t1 = nums[i] - k;
			t2 = nums[i] + k;
			if (hashmap.find(nums[i]) == hashmap.end()) {
				if (hashmap.find(t1) != hashmap.end()) {
					result++;
				}
				if (hashmap.find(t2) != hashmap.end()) {
					result++;
				}
				hashmap[nums[i]] = 1;
			}
		}
	}
	return result;
}

int main() {
	vector<int> nums{ 1,1,1,1,1 };
	int result = findPairs(nums, 0);
	return 0;
}