#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int size = nums.size();

        for (int i=0; i<size; i++){
            if (i>0 && nums[i] == nums[i-1])    continue;
            int lo = i+1;
            int hi = size-1;
            while(lo<hi){
                int sum = nums[i] + nums[lo] + nums[hi];
                if (sum == 0){
                    vector<int> temp{nums[i], nums[lo], nums[hi]};
                    result.push_back(temp);
                    while(lo < hi && nums[lo] == nums[lo+1])    lo++;
                    while(lo < hi && nums[hi] == nums[hi-1])    hi--;
                    lo++;
                    hi--;
                }
                else if (sum > 0)   hi--;
                else if (sum < 0)   lo++;
            }
        }
        return result;
    }
};
/*
i,j,k 는 index, nums[i] [j] [k] 의 합이 0 이 되는 3개의 int 반환하기. 모든 가능한 경우의 수 = n C 3 = n(n-1)(n-2)/3!
vector<int> temp 에 담아서 push_back 하는 접근. 3중 for문?
두개 숫자 정해지면, 나머지 하나의 숫자는 고정 -> dof 2

    */
