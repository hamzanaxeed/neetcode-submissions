class Solution {
public:

    bool can_Ship(vector<int>& weights,int days,int capacity){
        int count=1;
        int sum=0;

        for (int w:weights){
            if(w+sum<=capacity){
                sum+=w;

            }else{
                count++;
                sum=w;
            }
        }
        return count<=days;

    }

    int shipWithinDays(vector<int>& weights, int days) {
        
        int max_Element=0;
        int sum=0;
        for(int w:weights){
            sum+=w;
            if(w>max_Element)max_Element=w;
        }
        int left=max_Element;
        int right=sum;
        
        while(left<right){

            int mid=left+(right-left)/2;
            if(can_Ship(weights,days,mid)){
                right=mid;
            }else{left=mid+1;}

        }
        return left;
    }
};