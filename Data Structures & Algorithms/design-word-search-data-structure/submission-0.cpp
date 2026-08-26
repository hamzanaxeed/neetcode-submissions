class trie_Node{

public:
    trie_Node* children[26];
    bool end_Of_Word;

    trie_Node(){
        end_Of_Word=false;
        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }
    }

    ~trie_Node(){
        for(int i=0;i<26;i++)
        delete children[i];
    }

};

class WordDictionary {
    trie_Node* root;

    bool search_Helper(const string& word, int pos, trie_Node* node) const {
        if (!node) return false;
        if (pos == word.length()) return node->end_Of_Word;

        char c = word[pos];
        if (c == '.') {
             for (int i = 0; i < 26; i++) {
                if (node->children[i] && search_Helper(word, pos + 1, node->children[i])) {
                    return true;
                }
            }
            return false;
        } else {
            int index = c - 'a';
            if (!node->children[index]) return false;
            return search_Helper(word, pos + 1, node->children[index]);
        }
    }
public:
    WordDictionary() {
        root=new trie_Node();
    }
    
    void addWord(string word) {
        trie_Node* current=root;
        for(char &c:word){
            int index=c-'a';
            if(!current->children[index]){
                current->children[index]=new trie_Node();
            }
            current=current->children[index];
        }
        current->end_Of_Word=true;
    }
    
    bool search(string word) {
      
        return search_Helper(word, 0, root);
       
    }
};
