class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
        unordered_map<string,vector<string>> my_Result;

        for (auto const s:strs){
            
            vector<int> anagram(26,0);
            for (char my_Char:s){
                anagram[my_Char-'a']++;
            }

            string key=to_string(anagram[0]);
            for (int i=1;i<26;i++){
                key+=","+to_string(anagram[i]);
            }

            my_Result[key].push_back(s);
        }

        vector<vector<string>> check;
        
        for (auto s : my_Result){
        vector<string> temp;
            for (auto m : s.second){
           temp.push_back(m);
        }
        check.push_back(temp);
}
        return check;
    }
};
