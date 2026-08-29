class Solution {
public:
    int func1(vector<int>& nums,int i,vector<int>&dp,int end){
        if(i>end)return 0;

        if(dp[i]!=-1)return dp[i];
        dp[i]=max(func1(nums,i+1,dp,end),nums[i]+func1(nums,i+2,dp,end));        
    return dp[i];
    }

    int rob(vector<int>& nums) {
       int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int>dp1(nums.size(),-1);
        vector<int>dp2(nums.size(),-1);
        int case1 = func1(nums, 0,dp1, n - 2); 
        int case2 = func1(nums, 1,dp2, n - 1); 

        return max(case1, case2);
    
    }
};
