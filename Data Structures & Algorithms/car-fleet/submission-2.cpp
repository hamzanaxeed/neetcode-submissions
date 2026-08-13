class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,int>> my_Vec;
        for(int i=0;i<position.size();i++){
            my_Vec.push_back({position[i],speed[i]});
        }

        sort(my_Vec.begin(),my_Vec.end(),greater<pair<int,int>>());

        stack<float> ans;
        for(int i=0;i<my_Vec.size();i++){
            float time_To_Reach=(target-my_Vec[i].first)/(float)my_Vec[i].second;
            if(ans.empty()){ans.push(time_To_Reach);}
            else if(time_To_Reach>ans.top()){
              ans.push(time_To_Reach);
            }
        }

        return ans.size();
    }
};
