#include <vector>
#include <iostream>
#include <map>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return ((n & (n - 1)) == 0);
}

int main()
{
    bool answer = isPowerOfTwo(5);
    cout << answer;
    return 0;
}