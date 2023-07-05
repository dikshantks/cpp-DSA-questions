#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &nums)
{
    int prev = 0, curr = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            curr++;
        }
        else
        {
            ans = max(ans, prev + curr);
            prev = curr;
            curr = 0;
        }
    }
    ans = max(ans, prev + curr);

    if (ans == nums.size())
    {
        return ans - 1;
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 1, 0, 1};
    cout << longestSubarray(nums);
    return 0;
}