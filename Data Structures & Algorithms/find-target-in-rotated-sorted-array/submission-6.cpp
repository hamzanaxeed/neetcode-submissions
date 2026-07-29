class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;

        if(nums.size()==0)return -1;
        if (nums.size()==1 && nums[0]==target) return 0;

        while(left<=right){
            
            int mid=left+(right-left)/2;
            
            const int left_Element=nums[left];
            const int mid_Element=nums[mid];
            const int right_Element=nums[right];

            
            if (mid_Element==target)return mid;
          


            if(left_Element<=mid_Element){
                if(left_Element<=target && target <mid_Element){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }else{
                if(mid_Element<target && target<=right_Element){
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
          
        }
        return -1;
    }
};
