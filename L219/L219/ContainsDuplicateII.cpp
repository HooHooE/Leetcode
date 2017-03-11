#include<iostream>
#include<unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	int len = nums.size();
	if (len == 0) return false;
	unordered_map<int, int> hashmap;
	unordered_map<int, int>::const_iterator it;
	hashmap[nums[0]] = 0;
	for (int i = 1;i<len;i++) {
		it = hashmap.find(nums[i]);
		if (it != hashmap.end() && i - it->second <= k) return true;
		else hashmap[nums[i]] = i;
	}
	return false;
}

int main() {
	vector<int> nums{ 4,1,2,3,1,5 };
	bool flag = containsNearbyDuplicate(nums, 3);
	return 0;
}