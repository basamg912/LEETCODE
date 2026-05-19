class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m-1;
        int q = n-1;
        int idx = m+n-1;
        while (p>= 0 && q >=0){
            if (nums1[p] >= nums2[q]){
                nums1[idx--] = nums1[p--];
            }
            else{
                nums1[idx--] = nums2[q--];
            }
        }
        while (q >= 0){
            nums1[idx--] = nums2[q--];
        }
    }
};

/*
nums1 nums2 는 모두 오름차순 정렬이 되어 있는 상태
*/
