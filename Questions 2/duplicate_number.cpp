#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    int slow = nums[0];
    int fast = nums[0];

    // Detect cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Find entry point of cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    cout << slow;
    return 0;
}
