class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>left_Product(nums.size(),1);
        vector<int>right_Product(nums.size(),1);

        for(int i=1;i<nums.size();i++){
            left_Product[i]=left_Product[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            right_Product[i]=right_Product[i+1]*nums[i+1];
        }

        vector<int> ans(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            ans[i]=left_Product[i]*right_Product[i];
        }

        return ans;

    }
};
