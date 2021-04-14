#include <iostream>
#include <vector>

using namespace std;
bool palindrome(int n)
{
    vector<int> vec;
    while (n)
    {
        vec.push_back(n % 10);
        n /= 10;
    }
    int j = vec.size() - 1;
    int i = 0;
    while (i < j)
    {
        if (vec[i++] != vec[j--])
            return false;
    }
    return true;
}
int main()
{
    int a = 999;
    long max = ~1;
    for (int i = a; i > 100; i--)
    {
        for (int j = i; j > 100; j--)
        {
            if (palindrome(i * j))
            {
                max = ((i * j) > max) ? i * j : max;
            }
        }
    }
    cout << max;
}