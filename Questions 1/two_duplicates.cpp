#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    unordered_set<int> window;

    for (int i = 0; i < nums.size(); i++) {
        
        if (i > k) {
            window.erase(nums[i - k - 1]);
        }

        
        if (window.count(nums[i])) {
            cout << "true";
            return 0;
        }

        window.insert(nums[i]);
    }

    cout << "false";
    return 0;
}
