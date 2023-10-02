// https://takeuforward.org/arrays/search-insert-position/

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int ans = nums.size();
        int mid, low = 0, high = nums.size() - 1;
        while (low <= high)
        {
            mid = (high + low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};