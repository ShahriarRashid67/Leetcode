class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>stk;
        int box1,box2,box3;
    for(int i=0;i<tokens.size();i++){
        if(isSymbol(tokens[i])){
            box1=stk.top();stk.pop();
            box2=stk.top();stk.pop();
            box3=applyMath(tokens[i][0],box2,box1);
            stk.push(box3);
        }else{
            box3=stoi(tokens[i]);
            stk.push(box3);
        }
    }
      return box3;
    }
     int applyMath( char symbol, int a1, int a2){
        int a3 = 0;
        switch (symbol){
            case '+': a3 = a1+a2; break;
            case '*': a3 =  a1*a2; break;
            case '/': if(a2 != 0) a3 =  a1/a2; else a3 = INT_MAX; break;
            case '-' : a3 =  a1-a2; break;
            default: break;
        }
        return a3;
    }
    bool isSymbol(string s){
        char c =s[0];
        return((s.size()<=1) && (c=='+'|| c=='-'|| c=='/' || c=='*'));
    }
};