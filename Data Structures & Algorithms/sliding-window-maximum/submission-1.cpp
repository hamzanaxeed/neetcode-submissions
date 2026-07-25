class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int left=0;
        int right=0;

        priority_queue<pair<int,int>> max_Heap;

        for(right=0;right<k;right++){
            max_Heap.push({nums[right],right});
        }

        vector<int> answer;
        answer.push_back(max_Heap.top().first);

        for(right=k;right<nums.size();right++){

            max_Heap.push({nums[right],right});
            left++;
            while(max_Heap.top().second<left){max_Heap.pop();}

            answer.push_back(max_Heap.top().first);
        }
        return answer;
    }
};
