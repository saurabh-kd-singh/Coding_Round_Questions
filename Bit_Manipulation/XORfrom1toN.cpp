#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

//O(1) Both Time and Space Complexity.
int xorFrom1ToN(int N)
{
    if(N%4==0) return N;
    if(N%4==1) return 1;
    if(N%4==2) return N+1;
    if(N%4==3) return 0;

}

int main()
{
    int answer = xorFrom1ToN(10);
    cout << answer;
    return 0;
}