class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>mpp1;
        unordered_map<string, char>mpp2;
        int i=0, j=0;
        int m = pattern.length(), n = s.length();
        while(i<m && j<n)
        {
            string str;
            while(j<n && s[j]!=' ')
            {
                str.push_back(s[j]);
                j++;
            }
            if(mpp1.find(pattern[i])==mpp1.end() && i<m)
            {
                mpp1[pattern[i]] = str;
            }
            else if(mpp1.find(pattern[i])!=mpp1.end() && mpp1[pattern[i]]!=str)
            {
                return false;
            }
            if(mpp2.find(str)==mpp2.end())
            {
                mpp2[str] = pattern[i];
            }
            else if(mpp2.find(str)!=mpp2.end() && mpp2[str]!=pattern[i])
            {
                return false;
            }
            i++;
            j++;
        }
        if(i!=m)
        {
            return false;
        }
        if(j!=n+1)
        {
            return false;
        }
        return true;
    }
};