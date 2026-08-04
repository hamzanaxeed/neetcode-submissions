class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        const int k=temperatures.size();
        if(k==0) return {};

        stack<pair<int,int>> monotonic_Stack;
        vector<int> results(k,0);
        
        results[k-1]=0;
        monotonic_Stack.push({temperatures[k-1],k-1});

        for(int i=k-2;i>=0;i--){

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
