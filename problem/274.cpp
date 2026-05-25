class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h = 0;
        sort(citations.begin(), citations.end());
        for (int i=0; i<citations.size(); i++){
            // index = i
            int citation = citations[i];
            int rest = citations.size() - i;
            if (citation <= rest){
                h = max(h, citation);
            }
            else{
                h = max(h, rest);
            }
        }
        return h;
    }
};
/*
Core : h 개의 페이퍼가 최소 h개의 인용을 받아야한다.

[0,0,0,0,1,2,3] -> h = 2

*/
