#include <iostream>
#include <vector>
using namespace std;

void reverseRange(vector<int>& v, int start, int end) {
    while (start <= end) {
        swap(v[start++], v[end--]);
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();

    // Edge case
    if (k > n) k = k % n;

    // Step 1
    reverseRange(nums, 0, n - k - 1);

    // Step 2
    reverseRange(nums, n - k, n - 1);

    // Step 3
    reverseRange(nums, 0, n - 1);

    // k = k%n;
    // reverseRange(nums.begin(), nums.end());
    // reverseRange(nums.begin(), nums.begin()+k);
    // reverseRange(nums.begin()+k, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}