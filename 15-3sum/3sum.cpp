class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans(3);
        int target = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int start = i + 1;
            int end = n - 1;
            while (start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum == target) {
                    ans[0] = nums[i];
                    ans[1] = nums[start];
                    ans[2] = nums[end];
                    result.push_back(ans);
                    start++;
                    end--;      
                    while (start < end && nums[start] == nums[start - 1]) start++;             
                    while (start < end && nums[end] == nums[end + 1]) end--;
                } else if (sum < target) {
                    start++;
                } else {
                    end--;
                }
            }
        }
        return result;
    }
};