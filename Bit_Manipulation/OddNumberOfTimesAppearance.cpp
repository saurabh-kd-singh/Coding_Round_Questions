#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3};
    int answer = singleNumber(nums);
    cout << answer;
    return 0;
}