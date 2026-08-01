class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
       const int array_Size=nums.size();
        
        for(int i=0;i<array_Size;i++){
            
            while(nums[i]>=1 && nums[i]<array_Size && nums[i]!= nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }

         for (int i = 0; i < array_Size; i++) {
            if (nums[i] != i + 1)
                return i + 1;
        }

        return array_Size + 1;
    }
};