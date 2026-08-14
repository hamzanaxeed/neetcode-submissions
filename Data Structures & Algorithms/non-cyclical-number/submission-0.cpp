class Solution {
public:
    bool isHappy(int n) {

        if(n==1)return 1;
        
        unordered_set<int> my_Set;
        my_Set.insert(n);
        int sum=0;
        while(n!=0){
            int num=n%10;
            n=n/10;

            sum+=(num*num);
            if(n==0 && sum==1)return true;
            if(n==0){

                if(my_Set.find(sum)!=my_Set.end())return false;
                my_Set.insert(sum);
                n=sum;
                sum=0;
            }
        }
        return false;
    }
};
