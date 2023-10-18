// https://takeuforward.org/arrays/rearrange-array-elements-by-sign/

vector<int> alternateNumbers(vector<int> &a)
{
    // Write your code here.
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 0)
        {
            pos.push_back(a[i]);
        }
        else
        {
            neg.push_back(a[i]);
        }
    }
    for (int i = 0; i < a.size() / 2; i++)
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }

    return ans;
}