class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(size, 1);
        int curr = 1;
        int size = nums.size();
        for (int i=0; i<size; i++){
            answer[i] *= curr;
            curr *= nums[i];
        }
        curr = 1;
        for (int i=size-1; i>=0; i--){
            answer[i] *= curr;
            curr *= nums[i];
        }
        return answer;
    }
};
/*
왼쪽 누적곱 / 오른쪽 누적곱을 구하는게 목표
- curr = 1 을 시작으로 누적곱 구하기
- 여기서 핵심은 왼쪽누적곱[i] 는 i 를 제외한 i-1 까지 원소의 곱을 의미
- answer 는 처음에 1로 초기화된 상태
- [1,2,3,4] -- 첫번째 for loop 후 -> answer[1,1,1,1] => [1,1,2,6]
-- 두번째 for loop 후 -> answer[1,1,2,6] => [24, 12, 8, 6]
*/
