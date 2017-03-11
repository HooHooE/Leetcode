#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	int len = nums.size();
	int id = 0;
	for (int i = 0; i < len; i++) {
		if (nums[i] != val) {
			nums[id++] = nums[i];
		}
	}
	return id;
}

int main() {
	vector<int> nums{ 1,1,1,2,2,2 };
	int len = removeElement(nums, 1);
	return 0;
}