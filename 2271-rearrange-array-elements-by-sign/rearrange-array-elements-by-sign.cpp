class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int positiveidx = 0 , negativeidx = 1 ;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negativeidx] = nums[i];
                negativeidx+=2;
            }else{
                ans[positiveidx] = nums[i];
                positiveidx+=2;
            }
        
        }
        return ans;
    }
};