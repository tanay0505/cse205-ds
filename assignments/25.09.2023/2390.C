class Solution {
public:
    string removeStars(string s) {
        string ans;
        int i=0;
        while(i<s.size())
        {
            if(s[i]=='*' && !ans.empty())
               ans.pop_back();
            else
               ans.push_back(s[i]);
            i++;            
        }  
        return ans;
    }
};