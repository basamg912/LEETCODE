#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    string longestCommonPrefix(vector<string>& strs){
        int size = strs.size();
        if (strs.empty()){
            return "";
        }
        string s = strs[0];
        int length = 0;
        bool flag;
        for (int i=0; i<s.size(); i++){
            flag = true;
            for (int j=1; j<size; j++){
                if (i==0 && s[i] != strs[j][i]){
                    flag = false;
                    return "";
                }
                if (s[i] != strs[j][i]) {
                    flag = false;
                }
            }
            if (flag)   length++;
            else{
                break;
            }
        }
        return s.substr(0,length);
    }
};

/*
공통된 longest prefix 찾는 문제. 최대 200개 string 의 vector input. vector는 non-empty 일때 lower case 문자열만 가지고 있다.
    */
