#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    int low = 0, high = nums.size() - 1;
    int ans = nums.size();

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
