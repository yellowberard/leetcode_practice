// https://takeuforward.org/data-structure/leaders-in-an-array/

vector<int> superiorElements(vector<int> &a)
{
    // Write your code here.
    vector<int> ans;
    int max = INT_MIN;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (max < a[i])
        {
            max = a[i];
            ans.push_back(a[i]);
        }
    }
    return ans;
}