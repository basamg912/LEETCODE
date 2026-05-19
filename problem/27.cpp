class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        vector<int> temp(size);
        int cnt = 0;
        for (int i=0; i<size; i++){
            if (nums[i] != val){
                temp[cnt] = nums[i];
                cnt++;
            }
        }
        nums = temp;
        return cnt;
    }
};
/*
nums에 있는 int val 을 모두 제거하고 남은 결과에 관한 문제. val 을 제거하고 남은 원소 갯수 반환, nums 를 어떻게 잘 주물러서 vector 변환도 필요
*/
