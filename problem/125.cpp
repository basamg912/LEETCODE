class Solution {
public:
    bool isPalindrome(string s) {
        auto l = s.begin();
        auto r = s.end()-1;
        while(l<r){
            if ( !isalpha(*l)){
                l++;
                continue;
            }
            if ( !isalpha(*r)){
                r--;
                continue;
            }
            if (tolower(*l) != tolower(*r)) return false;
            l++;
            r--;
        }
        return true;
    }
    bool isalpha(char ch){
        if ( (ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z') || (ch>='0' && ch<='9')){
            return true;
        }
        return false;
    }
};
/*
회문 만족하는지 판단.
알파벳만 남기면 됨 띄어쓰기 포함, tolower -> #include <cctype> 필요
*/
