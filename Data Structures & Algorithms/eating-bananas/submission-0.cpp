class Solution {
public:
    bool can_Eat(vector<int>& piles,int h,int mid){
        int count=0;
        for(int w:piles){
            count += ceil((double)w / mid);
        }
        return count<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());

        while(start<end){
            int mid=start+(end-start)/2;

            if(can_Eat(piles,h,mid)){
                end=mid;
            }else{
                start=mid+1;
            }
        }
        return start;
        
    }
};
