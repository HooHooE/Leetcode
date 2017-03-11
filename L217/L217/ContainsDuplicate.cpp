#include<iostream>
#include<unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
	int len = nums.size();
	if (len == 0) return false;
	unordered_map<int, int> hashmap;
	hashmap[nums[0]] = 0;
	for (int i = 1; i < len; i++) {
		if (hashmap.find(nums[i]) != hashmap.end()) return true;
		hashmap[nums[i]] = i;
	}
	return false;
}

int main() {
	vector<int> nums{ 1,1,2,3,4 };
	bool flag = containsDuplicate(nums);
	return 0;
}