#include<iostream>
#include<vector>
using namespace std;

int thirdMax(vector<int>& nums) {
	int len = nums.size();
	if (len == 1) return nums[0];
	if (len == 2) return (nums[0]>nums[1] ? nums[0] : nums[1]);

	int max1 = -1;
	int max2 = -1;
	int max3 = -1;

	for (int i = 0; i < len; i++) {
		if (max1 == -1 || nums[i] == nums[max1]) {
			max1 = i;
			continue;
		}
		if (max2 == -1 || nums[i] == nums[max2]) {
			if (nums[max1] < nums[i]) {
				max2 = max1;
				max1 = i;
			}
			else {
				max2 = i;
			}
			continue;
		}
		if (max3 == -1 || nums[i] > nums[max3]) {
			if (nums[max2] < nums[i]) {
				if (nums[max1]<nums[i]) {
					max3 = max2;
					max2 = max1;
					max1 = i;
				}
				else {
					max3 = max2;
					max2 = i;
				}
			}
			else {
				max3 = i;
			}
		}
	}
	return (max3 == -1) ? nums[max1] : nums[max3];
}



int main() {
	vector<int> nums{ 6,5,4,3,2,1 };
	int result = thirdMax(nums);
	return 0;
}
