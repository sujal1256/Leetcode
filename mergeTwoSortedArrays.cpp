#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = 0; i < n; i++)
    {
        nums1[m + i] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());
}

int main(int argc, char const *argv[])
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    merge(nums1, 3, nums2, 3);

    for (int i : nums1)
    {
        cout << i << " ";
    }
    return 0;
}
