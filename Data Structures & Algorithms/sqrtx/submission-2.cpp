class Solution {
public:
    int mySqrt(int x) {
        
        int left=0;
        int right=x;
        int possible_Answer=0;

        while(left<=right){
            int mid=left+(right-left)/2;

            long long int a=(long long)mid*mid;
            if(a==x)return mid;

            if(a<x){
                possible_Answer=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return possible_Answer;
    }
};