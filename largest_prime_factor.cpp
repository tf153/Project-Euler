#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    long long n = 600851475143, i, max = 1;
    long long sq = sqrt(n);
    if (!(n & 1))
        max = 2;
    for (i = 3; i < sq; i += 2)
    {
        while (n % i == 0)
        {
            max = i;
            n /= i;
        }
    }
    cout << max;
    return 0;
}