class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> temp(size);
        for (int i=0; i<size; i++){
            int idx = (i+k) % size;
            temp[i] = nums[idx];
        }
        nums = temp;
    }
};
/*
nums 배열을 k번 순환시키기 (circular linked list 를 순회하는 느낌)
nums = [1,2,3,4,5] , k = 2 -> output [4 5 1 2 3]
i = 0, idx = 0+2 % 5 = 2 -> output[0] = nums[2] = 3

*/
