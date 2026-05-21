class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int threshold = (size / 2) + 1;
        unordered_map<int, int> numCounter;
        for (int i=0; i<size; i++){
            numCounter[ nums[i] ] += 1;
            if (numCounter[nums[i]] >= threshold){
                return nums[i];
            }
        }
        return 0;
    }
};
