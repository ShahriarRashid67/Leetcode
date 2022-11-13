class Solution
{
public:
    string reverseWords(string s)
    {
        string tmp = "";
        vector<string> vc;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                tmp += s[i];
            else
            {
                if (tmp != "")
                    vc.push_back(tmp);
                tmp = "";
            }
        }

        if (tmp != "")
            vc.push_back(tmp);
        string ans = "";
        for (int i = vc.size() - 1; i >= 0; i--)
        {
            ans += vc[i];

            if (i != 0)
            {
                ans += ' ';
            }
        }
        return ans;
    }
};