class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    int childCount;
    bool isTerminal;
    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};
class Trie{
    public:
    TrieNode* root;
    Trie(char ch){
        root = new TrieNode(ch);
    }
    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
        //assumption is that all the chars are in caps
        int index = word[0] - 'a';
        TrieNode* child;
        if(root->children[index] != NULL){
            //present in trie
            child = root->children[index];
        }
        else{
            //absent in trie
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }
        //recursion
        insertUtil(child, word.substr(1));
    }
    void insertword(string word){
        insertUtil(root, word);
    }
    
    void lcp(string first, string &ans){
        for(int i=0; i<first.length(); i++){
            char ch = first[i];
            if(root->childCount == 1){
                ans += ch;
                int index = ch - 'a';
                root = root->children[index];
            }
            else break;
            if(root->isTerminal) break;
        }
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string s = "";
        // bool flag = true;
        // int size = strs[0].size();
        // for(int i=0; i<size; i++){
        //     int ch = strs[0][i];
        //     for(int j=0; j<strs.size(); j++){
        //         if(ch != strs[j][i]){
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag) s += ch;
        // }
        // return s;
        //*******************************************
        //Trie approach
        Trie* t = new Trie('\0');
        for(auto it : strs){
            if(it == "")return "";
            t->insertword(it);
        } 
        string first = strs[0];
        string ans = "";
        t->lcp(first, ans);
        return ans;
    }
};