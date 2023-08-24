// https://takeuforward.org/data-structure/union-of-two-sorted-arrays/

#include <bits/stdc++.h>
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> ans;
    // set<int>st;
    // for(int i=0;i<n1;i++){
    //     st.insert(a[i]);
    // }
    //  for(int i=0;i<n2;i++){
    //     st.insert(b[i]);
    // }
    // for(auto it: st){
    //     ans.push_back(it);
    // }
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (ans.size() == 0 || ans.back() != a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (ans.size() == 0 || ans.back() != a[i])
        {
            ans.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (ans.size() == 0 || ans.back() != b[j])
        {
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}