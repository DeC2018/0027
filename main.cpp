#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    int i = 0;

    for (const int num : nums) {
      if (num != val) {
        nums[i++] = num; // Place the non-val elements at the front
      }
    }

    return i; // Return the count of non-val elements
  }
};

int main() {
  Solution solution;

  // Example 1
  vector<int> nums1 = {3, 2, 2, 3};
  int val1 = 3;
  int k1 = solution.removeElement(nums1, val1);
  cout << "Output: " << k1 << ", nums = [";
  for (int i = 0; i < k1; i++) {
    cout << nums1[i] << (i < k1 - 1 ? ", " : "");
  }
  for (int i = k1; i < nums1.size(); i++) {
    cout << ", _";
  }
  cout << "]" << endl;

  // Example 2
  vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
  int val2 = 2;
  int k2 = solution.removeElement(nums2, val2);
  cout << "Output: " << k2 << ", nums = [";
  for (int i = 0; i < k2; i++) {
    cout << nums2[i] << (i < k2 - 1 ? ", " : "");
  }
  for (int i = k2; i < nums2.size(); i++) {
    cout << ", _";
  }
  cout << "]" << endl;

  return 0;
}