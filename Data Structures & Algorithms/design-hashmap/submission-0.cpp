class MyHashMap {
    vector<int> hash_Map;

public:
    MyHashMap() {
        hash_Map=vector<int>(1000001,-1);
    }
    
    void put(int key, int value) {
        hash_Map[key]=value;
    }
    
    int get(int key) {
        return hash_Map[key];
    }
    
    void remove(int key) {
        hash_Map[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */