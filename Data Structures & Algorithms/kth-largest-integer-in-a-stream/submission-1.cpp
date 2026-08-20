class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int tar;
   
    KthLargest(int k, vector<int>& nums) {
        tar=k;
        for(int num:nums){
            pq.push(num);
            if(pq.size()>tar)pq.pop();
        }
    }
    
    int add(int val) {

        pq.push(val);
        if(pq.size()>tar)pq.pop();
        return pq.top();
    }
};
