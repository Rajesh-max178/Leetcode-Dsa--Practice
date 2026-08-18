class Solution {
private:
    
    bool checkRecursively(int i, const string &s) {
        if (i >= s.size() / 2) return true;
        if (s[i] != s[s.size() - i - 1]) return false;
        return checkRecursively(i + 1, s);
    }

public:
    bool isPalindrome(string s) {

        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) {
            cleaned += tolower(c);
            }
        }
        
        
        return checkRecursively(0, cleaned);
    }
};