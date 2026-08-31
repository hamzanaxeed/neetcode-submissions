class Solution {
public:
    int missingNumber(vector<int>& nums) {
        const int array_Size=nums.size();
        int my_Num=array_Size;
        
        for(int i=0;i<array_Size;i++){
            my_Num^=i;
            my_Num^=nums[i];
        }
        return my_Num;
    }
};
