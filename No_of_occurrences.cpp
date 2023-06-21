#include <bits/stdc++.h>
using namespace std;
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // using binary search
    pair<int, int> ans;
    int start = 0;
    int end = n - 1;
    int ans_start = 0;
    int ans_end = 0;

    int temp;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        temp = mid;
        if (arr[mid] == k)
        {
            for (int i = 1; i <= n; i++)
            {
                if (arr[mid - 1] == k && mid != 0)
                { // 0-1 will overflow the vector that is why there is second condition
                    mid--;
                }
                else
                {
                    ans_start = mid;

                    break;
                }
            }
            mid = temp;
            for (int i = 1; i <= n; i++)
            {
                if (arr[mid + 1] == k && mid != n - 1)
                { // n-1+1 will overflow the vector that is why there is second condition
                    mid++;
                }
                else
                {
                    ans_end = mid;
                    break;
                }
            }
            ans = make_pair(ans_start, ans_end);
            return ans;
        }
        if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    pair<int, int> notFound;
    notFound = make_pair(-1, -1);
    return notFound;
}

int main()
{
    vector<int> arr = {0, 5, 5, 6, 6, 6, 6, 6};
    pair<int, int> ans = firstAndLastPosition(arr, 8, 6);
    cout << "First element: " << ans.first << endl
         << "Second element: " << ans.second;
}