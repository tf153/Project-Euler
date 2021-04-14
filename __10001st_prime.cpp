//Seive of Eratosthenes
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
long long int prime(long n)
{
    unsigned long count = 0;
    bool num[214748100];
    vector<long long int> vec;
    memset(num, true, sizeof(num));
    for (unsigned long long int i = 2; i <= 214748100; i++)
    {
        if (num[i - 1] == true)
        {
            for (unsigned long long int j = i * i; j <= 214748100; j += i)
            {
                num[j - 1] = false;
            }
        }
    }
    for (unsigned long long int i = 1; i < 214748100; i++)
    {
        if (num[i])
        {
            vec.push_back(i + 1);
            cout << i + 1 << "\t";
            count++;
        }
    }
    cout << endl
         << count;
    return vec[n - 1];
}
int main()
{
    long n;
    cin >> n;
    cout << prime(n);
    return 0;
}