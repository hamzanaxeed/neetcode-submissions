class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> my_Hash_Map;

        for(int i=0;i<nums.size();i++){
            if (my_Hash_Map.find(nums[i])==my_Hash_Map.end()){
                my_Hash_Map[nums[i]]=i;
            }else{
                int index=my_Hash_Map[nums[i]];
                if(abs(index-i)<=k)return true;
                my_Hash_Map[nums[i]]=i;
            }
        }

        return false;

    }
};