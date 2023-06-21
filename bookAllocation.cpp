#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// BOOk Allocation Program check notebook for question
// we need to allocate such that maximum number of pages assigned to student is minimum
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= mid)
        {
            pages += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pages = arr[i];
        }
    }
    return true;
}

int bookAllocate(int arr[], int n, int m)
{
    // n is the size of array(number of book)
    // m is number of students
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2, ans = -1;
    // as e is now max thus sample space is minimum to maximum
    while (s <= e)
    {
        cout << "The start is " << s << endl
             << "the end is " << e << endl;
        if (isPossible(arr, n, m, mid))
        { // if possible then we want to check for minimum value thus we will go left side (update end)
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1; // if not possible then number lower than that will also no possible
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {12, 34, 67, 90};
    int a = bookAllocate(arr, 4, 2);
    cout << "The minimum number of pages will be: "
         << a << endl;

    return 0;
}
