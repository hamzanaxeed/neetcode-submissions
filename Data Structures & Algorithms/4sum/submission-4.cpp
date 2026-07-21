class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for(int j=i+1;j<nums.size();j++){

                if (j > i+1 && nums[j] == nums[j - 1])
                    continue;

                int left_Pointer=j+1;
                int right_Pointer=nums.size()-1;

                while(left_Pointer<right_Pointer){
                    long long current_Sum=(long long)nums[i]+nums[j]+nums[left_Pointer]+nums[right_Pointer];
                   
                    if(current_Sum==target){
                        answer.push_back({nums[i],nums[j],nums[left_Pointer],nums[right_Pointer]});
                        left_Pointer++;
                        right_Pointer--;
                        while(left_Pointer<right_Pointer && nums[left_Pointer-1]==nums[left_Pointer]){left_Pointer++;}
                        while(left_Pointer<right_Pointer && nums[right_Pointer+1]==nums[right_Pointer]){right_Pointer--;}
                   
                    }else if(current_Sum>target){right_Pointer--;}
                    else{left_Pointer++;}

                }
            }
        }
        return answer;
    }
};