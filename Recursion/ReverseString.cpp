#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void recur(int i, int n, vector<char> &s)
{
    if (i >= (n / 2))
    {
        return;
    }
    else
    {
        swap(s[i], s[n - i - 1]);
    }
    recur(i + 1, n, s);
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    int n = s.size();
    recur(0, n, s);
    for (char c : s)
    {
        cout << c << " ";
    }
    return 0;
}