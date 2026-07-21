class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        const int array_Size=nums.size();
        k=k%array_Size;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};