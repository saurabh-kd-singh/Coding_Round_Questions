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
    int n;
    cout << "Enter a Number:";
    cin >> n;
    if(isPowerOfTwo(n)) {
        cout << "Power Of Two";
    } else {
        cout << "Not a power of Two";
    }
    return 0;
}