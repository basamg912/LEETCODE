class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, bool> ordered;
        vector<int> temp(size);
        int cnt = 0;
        for (int i=0; i<size; i++){
            int a = nums[i];
            if (ordered.count(a)){
                continue;
            }
            ordered[a] = true;
            temp[cnt++] = a;
        }
        nums = temp;
        return cnt;
    }
};

/*
nums 배열에서 중복을 제거하고, 남아있는 원소 갯수를 return
unique 한 숫자만 남긴다.
*/
