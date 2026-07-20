class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int size1=word1.size();
        int size2=word2.size();
        int pointer1=0;
        int pointer2=0;

        string final="";

        while(pointer1<size1 && pointer2<size2){
            final+=word1[pointer1++];
            final+=word2[pointer2++];
        }

        while(pointer1<size1){final+=word1[pointer1++];}
        while(pointer2<size2){final+=word2[pointer2++];}
    
        return final;
    }
};