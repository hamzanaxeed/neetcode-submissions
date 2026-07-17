class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
          unordered_set<int> my_Set;
        for (int i=0;i<nums.size();i++){
            if(my_Set.find(nums[i])!=my_Set.end()){
                return true;
            }else{
                my_Set.insert(nums[i]);
            }
            }
return false;

    }
};