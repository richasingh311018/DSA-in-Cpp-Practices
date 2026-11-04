<<<<<<< HEAD

#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    int prev2 = 0;
    int prev1 = 0;

    for (int money : nums) {
        int curr = max(prev1, prev2 + money);

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << rob(nums) << endl;

    return 0;
}
=======

#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    int prev2 = 0;
    int prev1 = 0;

    for (int money : nums) {
        int curr = max(prev1, prev2 + money);

        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << rob(nums) << endl;

    return 0;
}
>>>>>>> 0566ef95a9d2bfe3500886d6eb2f0505779c146e
