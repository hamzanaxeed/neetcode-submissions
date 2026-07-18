class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        const int array_Size=nums.size();
        
        if(array_Size==0){return 0;}
        
        int max_Count=0;
        int num=0;

        unordered_map<int,int> hash_Table;
        for (auto i:nums){
            hash_Table[i]++;

            if(hash_Table[i]>(array_Size/2)){
                return i;
            }
        }

        return 0;
    }
};