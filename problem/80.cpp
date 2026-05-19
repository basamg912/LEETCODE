class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int k = 0;
        for (int i=0; i<size; i++){
            if (k<2 || nums[i] != nums[k-2]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
/*
최대 두번까지 숫자가 나올 수 있도록 중복 제거하는 문제
*/
