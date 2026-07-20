class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>my_Set;
        for (int num:nums){
            my_Set.insert(num);
        }
        
        int max_Length=0;
        int last_Digit=-9999;
        int length=0;

        for(auto it:my_Set){

            if(last_Digit==-9999 ||it==last_Digit+1){
                length++;
          
            }else{
                length=1;  
            }
            last_Digit=it;

            if(length>max_Length){
                max_Length=length;
            }
        
            
        }
        return max_Length;
    }
};
