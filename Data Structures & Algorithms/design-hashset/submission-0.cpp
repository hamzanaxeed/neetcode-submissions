class MyHashSet {

vector<int> my_Hash_Table;

public:
    MyHashSet() {
        
        my_Hash_Table=vector<int>(1000001,0);
    }
    
    void add(int key) {
        my_Hash_Table[key]=1;
    }
    
    void remove(int key) {
        my_Hash_Table[key]=0;
    }
    
    bool contains(int key) {
        return (my_Hash_Table[key]==1);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */