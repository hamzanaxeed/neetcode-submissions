class Solution {
public:
    int findMin(vector<int> &nums) {
        
        if(nums.size()==0)return -1;
        if(nums.size()==1)return nums[0];
        
        int left=0;
        int right=nums.size()-1;

        while(left<right){

              if(left==right-1){
                 return min(nums[left],nums[right]);
             }

            int mid=(right-left)/2+left;

           if(nums[mid]<nums[right]){
            right=mid;
           }else{
            left=mid;
           }
         
        }

    }
};
