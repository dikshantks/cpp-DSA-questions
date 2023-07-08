#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{

    int j = 0, i = 0, sum = 0, len = 1000000;

    while (j < nums.size())
    {
        sum += nums[j];

        while (sum >= target)
        {
            sum -= nums[i];
            len = min(len, j - i + 1);

            i++;
        }

        j++;
    }

    return len == 1000000 ? 0 : len;
}

int main()
{
    return 0;
}