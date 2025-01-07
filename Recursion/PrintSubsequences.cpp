#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void subsets2(vector<int> &nums, int i, vector<int> &sub, vector<vector<int>> &subs)
{
    subs.push_back(sub);
    for (int j = i; j < nums.size(); j++)
    {
        sub.push_back(nums[j]);
        subsets2(nums, j + 1, sub, subs);
        sub.pop_back();
    }
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> subs;
    vector<int> sub;
    subsets2(nums, 0, sub, subs);
    return subs;
}

int main()
{
    vector<int> nums = {3, 2, 1};
    vector<vector<int>> output = subsets(nums);
    for (const auto& innerVec : output) {  // Iterate over the outer vector
        for (const auto& val : innerVec) {  // Iterate over each inner vector
            std::cout << val << " ";  // Print each value
        }
        std::cout << std::endl;  // New line after each inner vector
    }
    return 0;
}