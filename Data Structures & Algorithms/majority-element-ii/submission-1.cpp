class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> my_Map;

        for (int number:nums){
            my_Map[number]++;
        }
        int threshold=nums.size()/3;

        vector<int> result;
        for(auto number:my_Map){
            if(number.second>threshold){
                result.push_back(number.first);
            }
        }

        return result;
    }
};