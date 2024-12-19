#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mp;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        int curr = nums[i];
        int more = target - curr;
        if(mp.find(more) != mp.end()) {
            return {mp[more], i};
        }
        mp[curr]=i;
    }
    return {-1, -1};        
}

int main() {
    vector<int> answer;
    vector<int> nums = {1, 2, 3, 4};
    answer = twoSum(nums, 7);
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    return 0;
}