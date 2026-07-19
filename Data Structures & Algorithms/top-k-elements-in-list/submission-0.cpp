class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>> pq;

        unordered_map<int,int> my_Hash_Map;
        for (auto i:nums){
            my_Hash_Map[i]++;
        }

        for(auto x:my_Hash_Map){
            pq.push({x.second,x.first});
        }

        vector<int> answer;

        for(int i=0;i<k;i++){
            answer.push_back(pq.top().second);
            pq.pop();
        }

        return answer;
    }
};
