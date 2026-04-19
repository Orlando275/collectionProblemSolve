class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    if (nums.size() == 0)
      return 0;
    int j = 1;
    int k = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[i - 1]) { // check the before element in the array
        nums[j] = nums[i]; // if ther are not the same I store the distinct
                           // value at index j
        k++;
        j++;
      }
    }
    return k;
  }
};