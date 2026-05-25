class Solution {
public:
    int jump(vector<int>& nums) {
        int near =0;
        int far = 0;
        int jump = 0;
        while (far < nums.size() -1){ // far == nums.size()-1 기점으로 도달 성공임으로 <
            int farthest = 0;
            for (int i=near; i<=far; i++){
                farthest = max(farthest, i + nums[i]);
            }
            jump++;
            near = far+1;
            far = farthest;
        }
        return jump;
    }
};
