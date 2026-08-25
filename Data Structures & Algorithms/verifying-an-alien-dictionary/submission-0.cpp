class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int char_Array[26];
        int count=0;
        for(char& c:order){
            char_Array[c-'a']=count++;
        }

        for(int i=0;i<words.size()-1;i++){
            int j=0;

            while(j<words[i].size()&&j<words[i+1].size()){
                if(char_Array[words[i][j]-'a']==char_Array[words[i+1][j]-'a']){
                    j++;
                    continue;
                }else if (char_Array[words[i][j]-'a']<char_Array[words[i+1][j]-'a']){
break;
                }else{
                    return false;
                }
            
            }
            if(j==words[i+1].size() && j<words[i].size())return false;
        }
        
        return true;
    }
};