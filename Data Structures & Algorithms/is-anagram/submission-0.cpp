class Solution {
public:
    bool isAnagram(string s, string t) {
     unordered_map<char,int> my_Hash_Map;

     for (auto character:s){
        my_Hash_Map[character]++;
     }  
      for (auto character:t){
        my_Hash_Map[character]--;
     } 
     for (auto check:my_Hash_Map){
        if (check.second!=0){
            return false;
        }
     }
     return true;
    }
};
