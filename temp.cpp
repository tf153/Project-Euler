#include <iostream>
#include <math.h>
#define watch(x) cout << (#x) << " value=:" << x << endl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int i, N = 9876;
    N = floor(log10(N)) + 1;
    cout << N << endl;
    N = 6738;
    double K = log10(N);
    K = K - floor(K);
    int X = pow(10, K);
    cout << X << endl;
    int y = 60;
    watch(y);
    char c[] = "rahul joshi";
    for (i = 0; c[i]; i++)
        ;
    cout << i << endl;
}