class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int cnt=1;
        int sz=searchWord.size();
        for(int i=0;i<sentence.size(); i++){
          if(sentence[i]==' '){
              cnt++;
          }else if((i==0) || sentence[i-1]==' '){
              if( (sentence.size()-i>=sz) ){
                string t=sentence.substr(i,sz);
                  if(t==searchWord){
                      return cnt;
                  }
              }
          } 
        }
       
        return -1;
    }
};