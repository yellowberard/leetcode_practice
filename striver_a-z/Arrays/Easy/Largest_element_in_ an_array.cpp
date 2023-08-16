//https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/

//https://www.codingninjas.com/codestudio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    // sort(arr.begin(),arr.end());
    // return(arr[n-1]);
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
