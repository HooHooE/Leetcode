#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
	int len = nums.size();
	int id = 0;
	for (int i = 0;i < len;i++) {
		if (nums[i] != 0) {
			nums[id++] = nums[i];
		}
	}
	for (; id < len;id++) {
		nums[id] = 0;
	}
}

int main() {
	vector<int> nums{ 1,0,2,1,0 };
	moveZeroes(nums);
	return 0;
}