class Solution {
public:

    bool is_Same(unordered_map<char,int>& first,unordered_map<char,int>& second){

        for (auto elements:first)
            if(elements.second>second[elements.first])return false;
        
        return true;
    }

    string minWindow(string s, string t) {
    
        if (t.size()==0)return "";
        if (t.size()>s.size()) return "";

        unordered_map<char,int> my_Map_T;

        for(auto n:t){
            my_Map_T[n]++;
        }

        int left=0;
        int right=0;
        int min_Length=INT_MAX;

        int best_Start=0;
        int best_End=0;

        const int string_Size=s.size();
        unordered_map<char,int> second_Map;

        while(right<string_Size){
            
            second_Map[s[right++]]++;
            while(is_Same(my_Map_T,second_Map)){
                
                if (min_Length>(right-left)){
                    min_Length=(right-left);
                    best_Start=left;
                    best_End=right;
                }
                second_Map[s[left]]--;
                left++;
            }
        }

       return s.substr(best_Start, best_End-best_Start);
    }
};
