
// https://takeuforward.org/arrays/implement-lower-bound-bs-2/

int lowerBound(vector<int> arr, int n, int x)
{
    // Write your code here
    int low = 0, high = n - 1, mid, ans = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] >= x)
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
