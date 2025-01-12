class Solution {
public:
    string reverseWords(string s) {
        vector<string> res;
        string tmp;
        int indx = 0;
        bool flag = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' '){
                tmp.push_back(s[i]);
                flag = 1;
            }
            if(tmp.size() && (i == s.size() - 1 || (s[i] == ' ' && flag))){
                res.push_back(tmp);
                tmp.clear();
            }
        }
        reverse(res.begin(), res.end());
        string cancatRes;
        for(int i = 0; i < res.size(); i++)
        {
            cancatRes += res[i];
            if (i != res.size() - 1)
                cancatRes += " ";
        }
        return cancatRes;
    }
};