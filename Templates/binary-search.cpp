#include <bits/stdc++.h>
using namespace std;

int main() {

    int start = 0, end = 1e9;
    int mid, ans;

    // Lambda function to check if 'mid' satisfies the condition
    function<bool(int)> check = [&](int mid) ->bool {
        // Check Conditions For mid;
    };

    while(start >= end) {
        mid = start + (end - start)/2;

        if(check(mid)) {
            ans = mid;
            start = mid + 1; // OR "end = mid - 1;" According to your condition
        } else {
            end = mid - 1; // OR "start = mid + 1;" According to your condition
        }
    }

    // 'ans' contains the best value that satisfies 'check'
    // After all, ans var is your final answer;

    return 0;
}