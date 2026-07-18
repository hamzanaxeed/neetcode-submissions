class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        const int array_Size=nums.size();
        
        if(array_Size==0){return 0;}

        unordered_map<int,int> hash_Table;
        for (auto i:nums){
            hash_Table[i]++;
        }
        
        int max_Count=0;
        int num=0;

        for (int i=0;i<array_Size;i++){
            if (hash_Table[nums[i]]>max_Count){
                max_Count=hash_Table[nums[i]];
                num=nums[i];
            }
        }
       
       return num;
     
    }
};