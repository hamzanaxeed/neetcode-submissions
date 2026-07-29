class TimeMap {

unordered_map<string,vector<pair<int,string>>> my_Map;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        my_Map[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>> my_Values=my_Map[key];
        int left=0;
        int right=my_Values.size()-1;

        string ans="";
        while(left<=right){
            int mid=left+(right-left)/2;
            if(my_Values[mid].first==timestamp){
                return my_Values[mid].second;
            }else if(my_Values[mid].first<=timestamp){
                ans=my_Values[mid].second;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};
