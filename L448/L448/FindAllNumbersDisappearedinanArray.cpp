#include<iostream>
#include<vector>
using  namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
	int len = nums.size();
	vector<int> result;
	for (int i = 0; i<len; i++) {
		if (nums[abs(nums[i]) - 1] > 0) {
			nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
		}
	}
	for (int i = 0; i<len; i++) {
		if (nums[i] > 0) {
			result.push_back(i + 1);
		}
	}
	return result;

}

int main() {
	vector<int> nums{ 4,3,2,7,8,2,3,1 };
	vector<int> result;
	result = findDisappearedNumbers(nums);
	return 0;
}