#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long sum, sq_sum;
    sum = n * (n + 1) / 2;
    sum *= sum;
    sq_sum = n * (n + 1) * (2 * n + 1) / 6;
    cout << sum - sq_sum;
    return 0;
}