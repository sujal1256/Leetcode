#include <iostream>
using namespace std;
// Finding pivot element pivot element, we find pivot element when we are given sorted and rotated array
// for eg sorted array is {1,2,3,4,5,6} androtated array is {5,6,1,2,3,4}; here 1 is pivot element
int pivotElement(int arr[], int n)
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
            e = mid; // here we have done mid instead of mid-1 because in case mid is the pivot element then we will not get correct answer.
        }
        mid = s + (e - s) / 2;
    }
    return s; // understand dry run
}
int main(int argc, char const *argv[])
{
    int arr[5] = {7, 8, 1, 2, 3};
    int ans = pivotElement(arr, 5);
    cout << "Pivot is " << ans;
    return 0;
}