class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left_Pointer=0;
        int right_Pointer=numbers.size()-1;

        while(left_Pointer<right_Pointer){

            if(numbers[left_Pointer]+numbers[right_Pointer]==target){
               return {left_Pointer+1,right_Pointer+1};
            }

            if(numbers[left_Pointer]+numbers[right_Pointer]<target){
                left_Pointer++;
            }else{
                right_Pointer--;
            }

        }

        return {};
    }
};