class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        

        if (0==strs.size()){
            return "";
        }

        string prefix=strs[0];
        const int array_Size=strs.size();
        for (int i =0;i<array_Size;i++){
    
            int j=0;
            if(strs[i].length()==0){
                return "";
            }

            for(j=0;j<prefix.length() && strs[i].length();j++){
                if(strs[i][j]!=prefix[j]){
                    prefix=prefix.substr(0,j);
                    if (j==0){
                        return "";
                    }
                }
            }
        }
        return prefix;
    }
};