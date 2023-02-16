class Solution {
public:
    void process(string &s,int maxW,int last){
        if(s.size()==maxW) return;
        int spaceNeed= maxW-s.size();
        int word=0;
        for(auto &c : s) if(c==' ') word++;
        if(word==0 || last){
            s.insert(s.size(),spaceNeed,' ');
            return;
        }
        int div=spaceNeed/word;
        int left=spaceNeed%word;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' &&(div>0 || left>0)){
                int tmp=0;
                if(left>0) tmp=1,left--;
                int sp=div+tmp;
                s.insert(i,sp,' ');
                i+=sp;
            }
        }
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>vc;
        string tmp=words[0];
        for(int i=1;i<words.size();i++){
            if(tmp.size()+words[i].size()<maxWidth){
                tmp+=(' '+words[i]);
            }else{
                process(tmp,maxWidth,0);
                vc.push_back(tmp);
                tmp=words[i];
            }   
        }
        process(tmp,maxWidth,1);
        vc.push_back(tmp);
        return vc;
    }
};