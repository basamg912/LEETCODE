class RandomizedSet {
public:
unordered_map<int, int> index_map;
vector<int> nums;
    RandomizedSet() {
    }

    bool insert(int val) {
        if (index_map.count(val))   return false;
        nums.push_back(val);
        index_map[val] = nums.size() -1;
        return true;
    }

    bool remove(int val) {
        if (!index_map.count(val))  return false;
        int last_num = nums.back();
        int num_index = index_map[val];
        if (last_num != val){
            nums[num_index] = last_num;
            index_map[last_num] = num_index;
        }
        nums.pop_back();
        index_map.erase(val);
        return true;
    }

    int getRandom() {
        int idx = rand() % nums.size();
        return nums[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
