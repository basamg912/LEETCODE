/* 4번 문제 - Median of Two sorted arrays
https://leetcode.com/problems/median-of-two-sorted-arrays/
*/
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const int m = nums1.size(), n = nums2.size();
        if (m > n)  return (findMedianSortedArrays(nums2, nums1));
        const int total = m+n; // 원소 전체 갯수
        const int half = (total +1)/2; // 그 중 절반 갯수
        // 원소 갯수가 적은 nums1 벡터를 기준으로 원소 몇개를 가져올 것인가를 결정하는 인자. 초기값 : 0 + m /2, 딱 절반을 왼쪽으로 가져간다.
        int lo = 0;
        int hi = m;

        while (lo <= hi){
            int i = (lo + hi) /2;
            int j = half - i;
            int aleft = (i == 0) ? INT_MIN : nums1[i-1];
            int aright = (i == m) ? INT_MAX : nums1[i];
            int bleft = (j==0) ? INT_MIN : nums2[j-1];
            int bright = (j==n) ? INT_MAX : nums2[j];

            if (aleft < bright && bleft < aright){
                if (total%2==1){
                    return (aleft > bleft) ? aleft : bleft;
                }
                else{
                    return (max(aleft, bleft) + min(aright, bright))/2.0;
                }
            }
            else if (aleft > bright){
                hi=i-1;
            }
            else if (bleft > aright){
                lo=i+1;
            }
        }
        return 0.0;
    }
}
