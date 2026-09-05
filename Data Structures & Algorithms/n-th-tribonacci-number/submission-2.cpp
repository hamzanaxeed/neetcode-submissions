class Solution {
public:
    int function(vector<int>& dp,int n){
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 1;

        if(dp[n]!=-1)return dp[n];

        dp[n]=function(dp,n-1)+function(dp,n-2)+function(dp,n-3);
        return dp[n];
    }
    int tribonacci(int n) {
       vector<int> dp(n+1,-1);
       return function(dp,n);
    }
};