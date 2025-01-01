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
    int left=4, right=8;
    // {1^2^3} ^ {1^2^3^4^5^6^7^8} = {4^5^6^7^8}
    // xorFrom1ToN(left-1) = {1^2^3}
    // xorFrom1ToN(right) = {1^2^3^4^5^6^7^8}
    int answer = xorFrom1ToN(left-1)^xorFrom1ToN(right);
    cout << answer;
    return 0;
}