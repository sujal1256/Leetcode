#include <iostream>
using namespace std;
int binarySearch(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long int ans = 0;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
long double decimals(int n, int integeralPart, int decimal_count)
{
    long double factor = 1;
    long double ans = integeralPart;
    for (int i = 0; i < decimal_count; i++)
    {
        factor = factor / 10;
        for (long double j = ans; (j * j) < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int count;
    cout << "Enter the number of decimals: ";
    cin >> count;
    int integralPart = binarySearch(n);
    cout << "The integral part from binary seach function is: " << integralPart << endl;
    int properResult = decimals(n, integralPart, count);
    cout << "The complete result is: " << properResult << endl;
}
