#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {

    int goal = nums.size() - 1;

    for(int i = nums.size() - 2; i >= 0; i--) {

        if(i + nums[i] >= goal) {
            goal = i;
        }
    }

    return goal == 0;
}

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if(canJump(nums))
        cout << "Can reach last index";
    else
        cout << "Cannot reach last index";

    return 0;
}