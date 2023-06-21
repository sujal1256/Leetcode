#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int k, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        { // mid will be shifted left
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int search(vector<int> &arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    int pivot = s, ans;

    if (arr[pivot] <= k && arr[n - 1] >= k)
    {

        ans = binarySearch(arr, n, k, pivot, n - 1);
        return ans;
    }
    else if (arr[0] <= k && arr[pivot - 1] >= k)
    {
        ans = binarySearch(arr, n, k, 0, pivot - 1);
        return ans;
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 3, 4, 9};
    cout << search(arr, 4, 3);
    return 0;
}
