class Solution {
public:
    int function1(vector<int>& nums,int i,vector<int>&dp){
    
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];

        int take=nums[i]+function1(nums,i-2,dp);
        int not_Take=function1(nums,i-1,dp);

        dp[i]=max(take,not_Take);
        return dp[i];
    }

    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        
        vector<int> dp(nums.size(),-1);
        return function1(nums,nums.size()-1,dp);
    }
};
