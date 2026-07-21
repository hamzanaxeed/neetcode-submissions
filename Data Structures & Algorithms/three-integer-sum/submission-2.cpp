class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        vector<vector<int>> outputs;
        for(int i=0;i<nums.size();i++){
            int left_Pointer=i+1;
            int right_Pointer=nums.size()-1;

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            while(left_Pointer<right_Pointer){
                if(nums[i]+nums[left_Pointer]+nums[right_Pointer]==0){
                    outputs.push_back({nums[i],nums[left_Pointer],nums[right_Pointer]});
                    left_Pointer++;
                    right_Pointer--;

                    while (left_Pointer < right_Pointer &&
                        nums[left_Pointer] == nums[left_Pointer - 1])
                        left_Pointer++;

                    while (left_Pointer < right_Pointer &&
                        nums[right_Pointer] == nums[right_Pointer + 1])
                        right_Pointer--;

                }else if(nums[i]+nums[left_Pointer]+nums[right_Pointer]>0){
                    right_Pointer--;
                }else{
                    left_Pointer++;
                }
        
            }

        }

        return outputs;
    }
};
