class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_set<int> my_Set(nums.begin(),nums.end());

        int i=1;
        while(true){

            if(!my_Set.count(i)){
                return i;
            }
            i++;
        }

        return 1;
    }
};