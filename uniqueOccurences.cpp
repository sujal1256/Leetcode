#include <iostream>
using namespace std;
bool uniqueOccurrences()
{
    int arr[] = {1, 2};
    int countArray[] = {};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int count = 0;
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = arr[j] ^ arr[i];
            }
        }
        for (int i = 0; i < sizeof(countArray) / sizeof(countArray[0]); i++)
        {
            if (count == countArray[i])
            {
                return false;
            }
            else
            {
                countArray[sizeof(countArray) / sizeof(countArray[0])] = count;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    cout << uniqueOccurrences();
    return 0;
}
