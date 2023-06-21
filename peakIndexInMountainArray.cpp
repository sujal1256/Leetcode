#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    if (arr.size() < 3)
    {
        return -1;
    }
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        // they are made becoause when ever mid becomes 0 and check for mid-1 the vector limit overflows thus we need to only check for next elemnet when mid==0 and only previous element when mid==arr.size()-1;
        if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
        {
            return mid;
        }

        if (arr[mid + 1] > arr[mid])
        {
            start = mid + 1;
        }
        if (arr[mid - 1] > arr[mid])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 5, 3, 2, 0};
    int ans = peakIndexInMountainArray(arr);
    cout << "Th peak index is: " << ans;
    return 0;
}
