// https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/#:~:text=Floor/Ceil%20in%20Sorted%20Array

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    // Write your code here.
    int low = 0, high = n - 1, mid;
    int low2 = 0, high2 = n - 1, mid2;
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] <= x)
        {
            low = mid + 1;
            ans.first = a[mid];
            // cout<< ans.first<<"f ";
        }

        else
        {
            high = mid - 1;
        }
    }
    while (low2 <= high2)
    {
        mid2 = (low2 + high2) / 2;
        if (a[mid2] >= x)
        {
            high2 = mid2 - 1;
            ans.second = a[mid2];
            // cout<<ans.second<<"s ";
        }
        else
        {
            low2 = mid2 + 1;
        }
    }
    return ans;
}