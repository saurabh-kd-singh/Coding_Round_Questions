#include <vector>
#include <iostream>
#include <map>
using namespace std;

void recurPermutations(vector<int> &nums, vector<vector<int>> &permutationsList, vector<int> &currentPermutation, vector<int> &numberSelected)
{
    if (currentPermutation.size() == nums.size())
    {
        permutationsList.push_back(currentPermutation);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (!numberSelected[i])
        {
            numberSelected[i] = 1;
            currentPermutation.push_back(nums[i]);
            recurPermutations(nums, permutationsList, currentPermutation, numberSelected);
            currentPermutation.pop_back();
            numberSelected[i] = 0;
        }
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> permutationsList;
    vector<int> numberSelected(nums.size(), 0);
    vector<int> currentPermutation;
    recurPermutations(nums, permutationsList, currentPermutation, numberSelected);
    return permutationsList;
}

int main()
{
    vector<int> nums;
    cout << "Enter Number of Elements : ";
    int n;
    cin >> n;
    cout << "\nEnter the elements one by one :\n";
    for(int i=0; i<n; i++) {
        int m;
        cin >> m;
        nums.push_back(m);
    }


    vector<vector<int>> permutationsList = permute(nums);
    for (const auto &row : permutationsList)
    {
        for (const auto &element : row)
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}