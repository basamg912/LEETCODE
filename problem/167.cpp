class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int l=0;
        int r=numbers.size()-1;
        while(l<=r){
            int ln = numbers[i];
            int rn = numbers[r];
            int sum = ln + rn;
            if (target > sum){
                l++;
            }
            else if (target < sum){
                r--;
            }
            else if (target == sum){
                res.push_back(ln);
                res.push_back(rn);
                break;
            }
        }
        return res;
    }
};
// two pointer. 이미 오름차순 정렬된 numbers
