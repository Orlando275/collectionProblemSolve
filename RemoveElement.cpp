class Solution { // O(n) time, O(1) space
public:
  int removeElement(vector<int> &nums, int val) {
    if (nums.size() == 0) // check if it doesnt have elements
      return 0;

    int j = 0;
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != val) { // if it's same it should save, if not you ignore
        nums[j] = nums[i];
        j++;
        k++;
      }
    }
    return k;
  }
};