class PrefixTree {
    
    PrefixTree *my_Array[26];
    bool end_Of_Word;

public:
    PrefixTree() {
        end_Of_Word=false;
        for(int i=0;i<26;i++)my_Array[i]=nullptr;
    }
    
    void insert(string word) {
        
        PrefixTree* temp=this;

        for (char &ch:word){
            int index=ch-'a';
            if(temp->my_Array[index]){
                temp=temp->my_Array[index];
            }else{
                temp->my_Array[index]=new PrefixTree();
                temp=temp->my_Array[index];
            }
        }
        temp->end_Of_Word=true;
    }
    
    bool search(string word) {
        
        PrefixTree* temp=this;
        for(char &ch:word){
            int index=ch-'a';
            if(temp->my_Array[index])temp=temp->my_Array[index];
            else return false;

        }
        return temp->end_Of_Word;
    }
    
    bool startsWith(string prefix) {
        
        PrefixTree* temp=this;
        for(char &ch:prefix){
            int index=ch-'a';
            if(temp->my_Array[index])temp=temp->my_Array[index];
            else return false;

        }
        return true;
    }
};
