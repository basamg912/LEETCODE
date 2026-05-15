/*
https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
*/
#include <string>
#include <iostream>
using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s) {
        const int size = s.size();
        unordered_map<char, int> last_seen(size);
        int maxlen=0;
        int left = 0;
        for (int right=0; right< size; right++){
            char ch = s[right];
            if (last_seen.count(ch) && last_seen[ch] >= left){
                left = last_seen[ch] + 1;
            }
            last_seen[ch] = right;
            maxlen = max(maxlen, right-left+1);
        }
        return maxlen;
    }
};

int main(){
    Solution sol;
    string s("aaaaaabc");
    cout << sol.lengthOfLongestSubstring(s);
    return 0;
}
