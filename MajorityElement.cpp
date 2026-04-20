class Solution { // O(n) time O(n) space
public:
  int majorityElement(vector<int> &nums) {
    unordered_map<int, int> concurrences;
    for (int i = 0; i < nums.size(); i++) {
      concurrences[nums[i]] += 1;
      if (concurrences[nums[i]] > nums.size() / 2)
        return nums[i];
    }
    return 0;
  }
};