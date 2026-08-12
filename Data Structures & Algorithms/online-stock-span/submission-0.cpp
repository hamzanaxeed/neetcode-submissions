class StockSpanner {
    stack<pair<int,int>> my_Stack;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(my_Stack.empty()){
            my_Stack.push({price,1});
        }else{
            if(my_Stack.top().first<=price){

                int count=1;
                while(!my_Stack.empty() && my_Stack.top().first<=price){
                    count+=my_Stack.top().second;
                    my_Stack.pop();
                }
                my_Stack.push({price,count});
            }else{
                my_Stack.push({price,1});
            }
        }
        return my_Stack.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */