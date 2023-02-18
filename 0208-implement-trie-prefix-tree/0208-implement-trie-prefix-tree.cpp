
class trieNode
{
public:
    bool isWord;
    trieNode *Next[26];
    trieNode(){
     isWord=false;
      for (int i = 0; i <26; i++)
      {
            Next[i]=NULL;
      }
    };
};

class Trie {
public:
    trieNode *root;
    Trie() {
        root =new trieNode();
    }
    
    void insert(string str) {
    trieNode *curr=root;
    for (auto c:str)
    {
        if(curr->Next[c-'a']==NULL){
            curr->Next[c-'a']=new trieNode();
        }
        curr=curr->Next[c-'a'];
    }
    curr -> isWord=true;
    }
    
    bool search(string str,bool isPrefix=false) {
    trieNode *curr=root;
    for (auto c:str)
    {
        if(curr->Next[c-'a']==NULL){
            return false;
        }
         curr=curr->Next[c-'a'];
    }
    return curr && (curr->isWord ||isPrefix) ;
    }
    
    bool startsWith(string prefix) {
        return search(prefix,true);
    }
};

