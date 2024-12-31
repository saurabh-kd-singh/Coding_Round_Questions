#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int countSetBits(int n)
{
    if (n <= 1)
        return n;
    int x = log2(n);

    return (pow(2, x - 1) * x) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
}

int main()
{
    int answer = countSetBits(11);
    cout << answer;
    return 0;
}