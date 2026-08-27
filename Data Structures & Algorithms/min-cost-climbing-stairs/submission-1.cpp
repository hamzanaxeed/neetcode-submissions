class Solution {
public:
    vector<int>dp;
    int get_Min_Cost(vector<int>& cost,int number){
        if(number==0 || number ==1)return cost[number];
        if(dp[number]!=-1)return dp[number];

        dp[number]=cost[number]+min(get_Min_Cost(cost,number-1),get_Min_Cost(cost,number-2));

        return dp[number];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        dp.resize(cost.size(),-1);
        return min(get_Min_Cost(cost,cost.size()-1),get_Min_Cost(cost,cost.size()-2));
    }
};
