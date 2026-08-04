class Solution {
public:
    bool can_Split(vector<int>& nums, int k,const int sum){
        int count=1;
        int my_Sum=0;
        for (int i=0;i<nums.size();i++){
            my_Sum+=nums[i];
            if(my_Sum>sum){
                count++;
                my_Sum=0;
                i--;
            }
            if(count>k)return false;
        }
        if(count>k)return false;
        return true;

    }

    int splitArray(vector<int>& nums, int k) {
        
        int left=*min_element(nums.begin(),nums.end());
        int right=0;
        for(int num:nums){right+=num;}

        while(left<right){
            int mid=left+(right-left)/2;
            if(can_Split(nums,k,mid)){
                right=mid;
            }else{
                left=mid+1;
            }
        }    
        return right;
    }
};