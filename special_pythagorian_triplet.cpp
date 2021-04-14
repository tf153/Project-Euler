#include <iostream>
using namespace std;
long long int pythagoreanTriplet(int n)
{
    long long int ans = 1;
    for (int i = 1; i <= n / 3; i++)
    {
        for (int j = i + 1; j <= n / 2; j++)
        {
            int k = n - i - j;
            if (i * i + j * j == k * k)
            {
                ans *= 1LL * i * j * k;
                return ans;
            }
        }
    }
    return -1;
}
int main()
{
    int sum = 1000;
    cout << pythagoreanTriplet(sum);
    return 0;
}