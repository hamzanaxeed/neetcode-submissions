class Solution {
public:
    int characterReplacement(string s, int k) {

        if(s.size()==0)return 0;

        int answer=0;
        int max_Frequency=0;
        int left=0;

        unordered_map<char,int> freq;

        for(int right=0;right<s.size();right++){
            freq[s[right]]++;
            max_Frequency=max(max_Frequency,freq[s[right]]);

            while(right-left+1-max_Frequency>k){
                freq[s[left]]--;
                left++;
            }
            answer=max(answer,right-left+1);
        }
        return answer; 
    }
};
