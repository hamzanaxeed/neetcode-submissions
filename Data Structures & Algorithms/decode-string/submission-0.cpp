class Solution {
public:
    string decodeString(string s) {
      
        stack<int> count_Stack;
        stack<string> ans_Stack;

        string current="";
        int number=0;

        for(char &ch:s){

            if(isdigit(ch)){
                number=number*10+(ch-'0');
            }else if(ch=='['){
                count_Stack.push(number);
                number=0;

                ans_Stack.push(current);
                current="";

            }else if(ch==']'){
                int count=count_Stack.top();
                count_Stack.pop();

                string temp=ans_Stack.top();
                ans_Stack.pop();

                while(count--){
                   temp+=current;
                }

                current=temp;

            }else{
                current+=ch;
            }
        }
        return current;

    }
};