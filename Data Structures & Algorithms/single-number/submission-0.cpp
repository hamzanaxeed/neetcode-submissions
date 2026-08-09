class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;

        for(int &nu:nums){
            ans^=nu;
        }
        return ans;
    }
};
