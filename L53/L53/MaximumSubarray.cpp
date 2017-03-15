#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
	int len = nums.size();
	int *d = new int[len];
	int max = nums[0];
	d[0] = nums[0];
	for (int i = 1; i < len; i++) {
		d[i] = d[i - 1] >= 0 ? nums[i] + d[i - 1] : nums[i];
		if (d[i] > max) max = d[i];
	}
	delete[]d;
	return max;
}

int main() {
	vector<int> nums{ -2,1,-3,4,-1,2,1,-5,4 };
	int result = maxSubArray(nums);
	return 0;
}