class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal = nums.size() -1;
        for (int pos = goal-1; pos >= 0 ; pos--){
            if (pos + nums[pos] >= goal){
                goal = pos;
            }
        }
        return goal == 0;
    }
};
