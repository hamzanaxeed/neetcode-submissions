class Solution {
public:

    bool is_Alphabet(char a){
        return ((a<='Z' && a>='A')||(a<='z' && a>='a')||(a<='9' && a>='1')||a=='0');
    }

    bool isPalindrome(string s) {
        
        int left=0;
        int right=s.size()-1;

        cout<<left<<"   "<<right<<endl;
        while(left<right){
            
            cout<<s[left]<<"   "<<s[right]<<endl;
            if(!is_Alphabet(s[left])){left++;continue;}
            if(!is_Alphabet(s[right])){right--;continue;}

            cout<<tolower(s[left])<<"  "<<tolower(s[right])<<endl;
            if(tolower(s[left++])!=tolower(s[right--]))return false;
        }

        return true;
    }
};
