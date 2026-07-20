class Solution {
public:

    bool is_Palindrome(string s,int left,int right){
        while(left<right){
            if(s[left++]!=s[right--]){return false;}
        }
        return true;
    }
   
    bool validPalindrome(string s) {

        int left=0;
        int right=s.size()-1;

        while(left<right){

            if(s[left]!=s[right]){
                return is_Palindrome(s,left,right-1)||is_Palindrome(s,left+1,right);
            }
            left++;
            right--;
        }     
        return true;
    }
};