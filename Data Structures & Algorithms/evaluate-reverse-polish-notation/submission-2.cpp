class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> my_Stack;

        for(string s:tokens){
            if(s=="+"){
                int num1=my_Stack.top();
                my_Stack.pop();
                
                int num2=my_Stack.top();
                my_Stack.pop();
                
                my_Stack.push(num1+num2);

            }else if(s=="-"){
                int num1=my_Stack.top();
                my_Stack.pop();
                
                int num2=my_Stack.top();
                my_Stack.pop();
                
                my_Stack.push(num2-num1);
                
            }else if(s=="*"){
                int num1=my_Stack.top();
                my_Stack.pop();
                
                int num2=my_Stack.top();
                my_Stack.pop();
                
                my_Stack.push(num1*num2);
                
            }else if(s=="/"){
                int num1=my_Stack.top();
                my_Stack.pop();
                
                int num2=my_Stack.top();
                my_Stack.pop();
                
                my_Stack.push(num2/num1);
                
            }else{
                my_Stack.push(stoi(s));
            }
        }
        return my_Stack.top();
    }
};
