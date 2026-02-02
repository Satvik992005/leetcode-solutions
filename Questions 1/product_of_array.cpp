#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();

    vector<int> answer(n, 1);

    
    int left = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = left;
        left *= nums[i];
    }

    
    int right = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= right;
        right *= nums[i];
    }

    
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}
