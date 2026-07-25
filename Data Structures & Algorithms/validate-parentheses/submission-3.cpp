class Solution {
public:
    bool isValid(string s) {
        stack<char> my_Stack;

        for(char ch:s){
            if(ch=='(' || ch=='{'|| ch=='['){
                my_Stack.push(ch);
            }else{

                if(my_Stack.empty())return false;
                char element=my_Stack.top();
                my_Stack.pop();

                if(element!='(' && ch==')')return false;
                if(element!='{' && ch=='}')return false;
                if(element!='[' && ch==']')return false;
            }
        }

        return my_Stack.empty();
    }
};
