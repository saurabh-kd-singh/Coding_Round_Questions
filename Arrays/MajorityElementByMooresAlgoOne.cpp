#include <vector>
#include <iostream>
#include <map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int count = 0;
    int element;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            element = nums[i];
            count++;
        }
        else if (nums[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    int appeared;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i]==element) {
            appeared++;
        }
    }

    if(appeared>(nums.size()/2)) {
        return element;
    } else {
        return -1;
    }
}

int main()
{
    int answer;
    vector<int> nums = {1, 2, 2, 4, 2, 1, 2};
    answer = majorityElement(nums);
    cout << answer;
    return 0;
}