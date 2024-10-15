class Solution {
public:

    long long minimumSteps(string s) {
        int n = s.length();
        long long counter = 0;
        int target = 0;

        if (n <= 1)
            return counter;
        for (target = 0; target < n && s[target] == '0'; target++);
        
        int onesCount = target;

        for (int i = target; i < n; i++)
        {
            if (s[i] == '0') {
                counter += (i - onesCount);
                onesCount++;
            }
        }
        return counter;
    }
};