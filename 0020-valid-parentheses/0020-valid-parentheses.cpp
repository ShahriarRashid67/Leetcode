class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        
      for (auto ch : s) {
        if (ch == '(' or ch == '{' or ch == '[') {
            stk.push(ch);
        }
        else {
            if (stk.empty()) return false;
            if (ch == '}' and stk.top() == '{') stk.pop();
            else if (ch == ')' and stk.top() == '(') stk.pop();
            else if (ch == ']' and stk.top() == '[') stk.pop();
            else return false;
        }
      }
      return stk.empty();
    }
};