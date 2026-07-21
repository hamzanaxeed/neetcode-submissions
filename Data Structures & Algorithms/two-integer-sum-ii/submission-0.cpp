class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int left_Pointer=0;
        int right_Pointer=numbers.size()-1;

        vector<int> result;

        while(left_Pointer<right_Pointer){

            if(numbers[left_Pointer]+numbers[right_Pointer]==target){
                result.push_back(left_Pointer+1);
                result.push_back(right_Pointer+1);
                return result;
            }

            if(numbers[left_Pointer]+numbers[right_Pointer]<target){
                left_Pointer++;
            }else{
                right_Pointer--;
            }

        }

        return result;
    }
};