class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> my_Hash_Map;
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            int complement=target-nums[i];

            if (my_Hash_Map.find(complement)!=my_Hash_Map.end()){
               ans.push_back(my_Hash_Map[complement]);
               ans.push_back(i);
            }
            my_Hash_Map[nums[i]]=i;
        }    
        return ans;    

    }
    
};
