#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
	int len = nums.size();
	if (len < 2) return len;
	int id = 0;
	for (int i = 1; i < len; i++) {
		if (nums[i] != nums[i-1]) {
			nums[++id] = nums[i];
		}
	}
	return id+1;
}

int main() {
	vector<int> nums{ 1,1,2,4,4,5,5 };
	int result = removeDuplicates(nums);
	return 0;
}


