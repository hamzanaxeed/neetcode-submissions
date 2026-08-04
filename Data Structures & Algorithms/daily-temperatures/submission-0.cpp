class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        if(temperatures.size()==0) return {};

        stack<pair<int,int>> monotonic_Stack;
        vector<int> results(temperatures.size(),0);
        
        results[temperatures.size()-1]=0;
        monotonic_Stack.push({temperatures[temperatures.size()-1],temperatures.size()-1});

        for(int i=temperatures.size()-2;i>=0;i--){

            while(!monotonic_Stack.empty() && monotonic_Stack.top().first<=temperatures[i])
            monotonic_Stack.pop();

            if(monotonic_Stack.empty())results[i]=0;
            else {
                results[i]=monotonic_Stack.top().second-i;
              
            }

            monotonic_Stack.push({temperatures[i],i});
            
        }
        return results;
    }
};
