class KthLargest {
public:
    vector<int> my_Storage;
    int tar;
    KthLargest(int k, vector<int>& nums) {
        tar=k;
        my_Storage=nums;
    }
    
    int add(int val) {
        my_Storage.push_back(val);
        priority_queue<int> pq(my_Storage.begin(),my_Storage.end());

        int i=1;
        while(i<tar){
            i++;
            pq.pop();
        }

        return pq.top();
    }
};
