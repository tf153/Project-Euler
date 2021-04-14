#include <iostream>
#include <cstring>
using namespace std;
void seive_of_eratosthenes(bool primes[])
{
    long long int i, j;
    for (i = 2; i < 2000000; i++)
    {
        if (primes[i])
        {
            j = i * i;
            while (j < 2000000)
            {
                primes[j] = false;
                j += i;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    long long int ans = 0;
    bool primes[2000000];
    memset(primes, true, sizeof(primes));
    seive_of_eratosthenes(primes);
    for (auto i = 2; i < 2000000; i++)
    {
        if (primes[i])
            ans += i;
    }
    cout << ans;
    return 0;
}