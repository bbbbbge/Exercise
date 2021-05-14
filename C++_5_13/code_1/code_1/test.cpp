#define _CRT_SECURE_NO_WARNINGS 1


class Solution {
public:
	int NumberOf1(int n) {
		int cnt = 0;
		for (int i = 0; i < 32; i++)
		{
			if (n >> i & 1) cnt++;
		}
		return cnt;
	}
};

class Solution {
public:
	vector<vector<int>> permutation(vector<int>& nums) {
		sort(nums.begin(), nums.end());

		vector<vector<int>> a;
		do
		{
			a.push_back(nums);
		} while (next_permutation(nums.begin(), nums.end()));
		return a;
	}
};

class Solution {
public:
	vector<int> findNumbersWithSum(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (target == nums[i] + nums[j])
				{
					vector<int> a;
					a.push_back(nums[i]);
					a.push_back(nums[j]);
					return a;
				}
			}
		}
	}
};