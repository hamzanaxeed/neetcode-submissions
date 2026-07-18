class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        make_heap(nums.begin(),nums.end());
        vector<int> sorted_Array;
        const int array_Size=nums.size();

        for (int i=0;i<array_Size;i++){
            sorted_Array.push_back(nums.front());
            pop_heap(nums.begin(),nums.end());
            nums.pop_back();
        }

        for(int i=0;i<array_Size/2;i++){
            swap(sorted_Array[i],sorted_Array[array_Size-i-1]);
        }

        return sorted_Array;
    }
};