class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxVal = *max_element(nums.begin(), nums.end());
        int index = find(nums.begin(), nums.end(), maxVal) - nums.begin();

        sort(nums.begin(), nums.end());

        if(nums[n-1] >= 2 * nums[n-2]){
            return index;
        }else{
            return -1;
        }
    }
};