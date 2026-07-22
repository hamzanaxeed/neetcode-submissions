class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size()==0)return 0;

        unordered_set<char> my_Set;
        int left_Pointer=0;
        int right_Pointer=0;

        int answer=0;

        while(right_Pointer<s.size()){
            if(my_Set.count(s[right_Pointer])){
                my_Set.erase(s[left_Pointer++]);
            }else{
                my_Set.insert(s[right_Pointer++]);
                answer=max(answer,right_Pointer-left_Pointer);
            }
          
        }

        return answer;

    }
};
