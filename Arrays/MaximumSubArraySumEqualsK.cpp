#include <vector>
#include <iostream>
#include <map>
using namespace std;

int lenOfLongestSubarr(vector<int> &A, int K)
{
    int n = A.size();
    int maxLen = 0;
    int sum = 0;
    map<int, int> prefixSum;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == K)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - K;
        if (prefixSum.find(rem) != prefixSum.end())
        {
            int currLen = i - prefixSum[rem];
            maxLen = max(maxLen, currLen);
        }
        if (prefixSum.find(sum) == prefixSum.end())
        {
            prefixSum[sum] = i;
        }
    }
    return maxLen;
}

int main()
{
    vector<int> nums = {1, 4, 3, 3, 5, 5};
    int answer = lenOfLongestSubarr(nums, 16);
    cout << answer;
    return 0;
}