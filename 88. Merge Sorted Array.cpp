// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

// Solution: pull all values from second array to first array and then sort the first array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i = 0; i < nums2.size(); i++)
		nums1[nums1.size()-1-i] = nums2[i];
		
	    sort(nums1.begin(), nums1.end()); 
    }
};
