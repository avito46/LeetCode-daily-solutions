class Solution {
public:
    string rle(string s) {
        string result = "";
        int i = 0;
        while (i < s.length()) {
            int j = i + 1;
            while (j < s.length() && s[j] == s[i]) {
                j++;
            }
            int count = j - i;
            result += to_string(count) + s[i];
            i = j;
        }
        return result;
    }
    
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }
        string prev = countAndSay(n - 1);
        return rle(prev);
    }
};