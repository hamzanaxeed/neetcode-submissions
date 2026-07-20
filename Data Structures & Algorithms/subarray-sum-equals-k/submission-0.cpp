class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>prefix_Sum;
        prefix_Sum[0]=1;

        int results=0;
        int sum_Till=0;

        for(int number:nums){
            sum_Till+=number;

            if(prefix_Sum.find(sum_Till-k)!=prefix_Sum.end()){
                results+=prefix_Sum[sum_Till-k];
            }
            prefix_Sum[sum_Till]++;
        }
        return results;

    }
};