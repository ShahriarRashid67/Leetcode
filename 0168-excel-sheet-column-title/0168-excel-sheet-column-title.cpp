class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        char c;
         while(columnNumber > 0){
            int rem = columnNumber % 26 ? columnNumber % 26 - 1 : 25;
            c = rem + 'A';
            s +=c;
            columnNumber = (columnNumber - rem) / 26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};