class Trie {
public:
    struct TrieNode {
        TrieNode* arr[26];
        bool is_end;
        TrieNode() {
            for (int i = 0; i < 26; i ++) arr[i] = NULL;
            is_end = false;
        }
    };
    
    TrieNode* root;
    
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* curr = root;
        for (int i = 0; i < word.size(); i ++) {
            int idx = word[i] - 'a';
            if (curr->arr[idx] == NULL)
                curr->arr[idx] = new TrieNode();
            curr = curr->arr[idx];
        }
        curr->is_end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* curr = root;
        for (int i = 0; i < word.size(); i ++) {
            int idx = word[i] - 'a';
            if (curr->arr[idx] == NULL)
                return false;
            curr = curr->arr[idx];
        }
        return curr->is_end;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for (int i = 0; i < prefix.size(); i ++) {
            int idx = prefix[i] - 'a';
            if (curr->arr[idx] == NULL)
                return false;
            curr = curr->arr[idx];
        }
        return true;
    }
};
