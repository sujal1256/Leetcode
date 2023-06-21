#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int odd[5] = {1, 3, 6, 8, 12};
    int even[6] = {1, 2, 9, 10, 12, 21};

    cout << binarySearch(even, 6, 10);
    return 0;
}
