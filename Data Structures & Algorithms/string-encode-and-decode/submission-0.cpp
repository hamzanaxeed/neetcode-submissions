class Solution {
public:

    string encode(vector<string>& strs) {

        string final_Str="";
        for (string my_Strings:strs){
            for(int i=0;i<my_Strings.size();i++){
                final_Str+=(my_Strings[i]+("b"-"a"));
            }
            final_Str+=":";
        }
        //cout<<final_Str<<endl;
        return final_Str;
    }

    vector<string> decode(string s) {

        vector<string> answer;
        string temp="";
        for(int i=0;i<s.size();i++){
            if (s[i]==':'){
                answer.push_back(temp);
                temp="";
                continue;
            }
            temp+=(s[i]-("b"-"a"));
        }
        return answer;
    }
};
