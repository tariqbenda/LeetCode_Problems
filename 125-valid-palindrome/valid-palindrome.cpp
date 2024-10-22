class Solution {
public:
    bool isPalindrome(string s) {
        string cleanStr;

        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
                cleanStr += tolower(s[i]);
        }
        string strReversed = cleanStr;
        reverse(strReversed.begin(), strReversed.end());
        if (cleanStr == strReversed)
            return true;
        return false;
    }
};