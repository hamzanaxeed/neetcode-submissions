class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        const int array_Size=digits.size();

        reverse(digits.begin(),digits.end());
       
        int carry=1;
        for(int i=0;i<array_Size;i++){
            digits[i]=digits[i]+carry;
            carry=digits[i]/10;
            digits[i]=digits[i]%10;
            if(!carry) break;
        }
        if(carry)digits.push_back(carry);

        reverse(digits.begin(),digits.end());
        return digits;
    }
};
