class TrieNode{
  public:
    TrieNode* children[26];
    bool isWordComplete;
    
    TrieNode(){
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isWordComplete = false;
    }

};


class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;
        int curr = 0;

        for(int i = 0; i < word.size(); i++){
            curr = word[i] - 'a';
            if(node -> children[curr] == NULL)
                node -> children[curr] = new TrieNode();
            node = node -> children[curr];
        }
        
        node -> isWordComplete = true;
        
    }
    
    bool search(string word) {
        TrieNode* node = root;
        int curr = 0;

        for(int i= 0; i < word.size(); i++){
            curr = word[i] - 'a';
            if(node -> children[curr] == NULL)
                return false;
            node = node -> children[curr];
        }
        
        return node -> isWordComplete;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        int curr = 0;

        for(int i= 0; i < prefix.size(); i++){
            curr = prefix[i] - 'a';
            if(node -> children[curr] == NULL)
                return false;
            node = node -> children[curr];
        }
        return true;
    }
    
    
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */