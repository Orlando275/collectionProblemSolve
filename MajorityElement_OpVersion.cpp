class Solution { // O(n) time O(1) space
public:
  int majorityElement(vector<int> &nums) {
    int element = 0;
    int concurrences = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (i == 0 || concurrences == 0) {
        element = nums[i];
        concurrences++;
      } else {
        if (element == nums[i])
          concurrences++;
        else {
          concurrences--;
        }
      }
    }
    return element;
  }
};