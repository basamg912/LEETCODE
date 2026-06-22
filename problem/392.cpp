class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sidx = 0, tidx=0;
        while(sidx < s.size() && tidx < t.size()){
            if (s[sidx] == t[tidx]){
                sidx++;
            }
            tidx++;
        }
        return (sidx==s.size());
    }
};
/*
subsequence 이면 true return
two pointer catagory
*/
