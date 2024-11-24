#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int i = 0;
    int j = n - 1;

    while(i < j) {
        swap(nums[i], nums[j]);
        ++i;
        --j;
    }

    return nums;
}

int main() {
    vector<int> nums = {5, 4, 3, 2, 1};
    int n = nums.size();
    vector<int> ans = reverseArray(n, nums);
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}