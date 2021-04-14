#include <bits/stdc++.h>
using namespace std;

long long lcm(long long n)
{
    long long ans = 1;
    for (long long i = 1; i <= n; i++)
        ans = (ans * i) / (__gcd(ans, i));
    return ans;
}

int main()
{
    long long n = 20;
    cout << lcm(n);
    return 0;
}