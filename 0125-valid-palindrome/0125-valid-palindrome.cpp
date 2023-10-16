class Solution {
public:
    bool isPalindrome(string s) {
        string cleanString;
        for (char c : s) {
            if (isalnum(c)) {
                cleanString += tolower(c);
            }
        }
        
        int start = 0;
        int end = cleanString.size() - 1;

        while (start < end) {
            if (cleanString[start] != cleanString[end]) {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }
};