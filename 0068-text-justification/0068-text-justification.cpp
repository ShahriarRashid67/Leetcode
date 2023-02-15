class Solution {
public:
    void preprocess(string &s,int maxWidth,int last){
        if(s.size()==maxWidth) return;
        
        int space=0;
        for(auto c:s) {if(c==' ') space++;}
        
        int spneed=maxWidth-s.size();
        if(space==0 || last==1){
            s.insert(s.size(),spneed,' ');
            return; 
        }
        int div=spneed/space;
        int left=spneed%space;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && (div>0 || left>0)){
                int tmp=0;
                if(left>0){
                    tmp=1;
                    left--;
                }
                int sp = div + tmp;
                s.insert(i,sp,' ');
                i+=sp;
            }
        }
       // cout<<s<<" :";
    }
 
    vector<string> fullJustify(vector<string>& s, int maxWidth) {
        vector<string>vc;
         string tmp = s[0];
        for (int i = 1; i < s.size(); i++)
        {
            if (tmp.size() + s[i].size()+1 <=maxWidth)
            {
                tmp += (' '+s[i]);
            }
            else
            {
                vc.push_back(tmp);
                tmp = s[i];
            }
        }
        preprocess(tmp,maxWidth,1);
        vc.push_back(tmp);
        for(auto &str:vc){
            preprocess(str,maxWidth,0);
           
        }
        return vc;
    }
};