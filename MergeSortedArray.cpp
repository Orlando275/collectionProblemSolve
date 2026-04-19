class Solution { // O(n) time, O(1) space
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (n == 0)
      return;
    int z = m - 1;
    int j = n - 1;
    int i = n + m - 1;
    while (z >= 0 && j >= 0) {
      if (nums2[j] <= nums1[z]) {
        nums1[i] = nums1[z];
        z--;
      } else {
        nums1[i] = nums2[j];
        j--;
      }
      i--;
    }
    if (z < 0) {
      while (i >= 0) {
        nums1[i] = nums2[j];
        j--;
        i--;
      }
    }
    if (j < 0) {
      while (i >= 0) {
        nums1[i] = nums1[z];
        z--;
        i--;
      }
    }
  }
};