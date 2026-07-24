class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_Length=INT_MAX;
        int left=0;
        int sum=0;

        for(int right=0;right<nums.size();right++){
            
          sum+=nums[right];
          while(sum>=target){
            min_Length=min(min_Length,right-left+1);
            sum-=nums[left++];
          }
        }
        
        return min_Length==INT_MAX?0:min_Length;
    }
};