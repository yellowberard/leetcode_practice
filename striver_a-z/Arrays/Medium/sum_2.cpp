//https://leetcode.com/problems/two-sum
//https://takeuforward.org/data-structure/two-sum-check-if-a-pair-with-given-sum-exists-in-array/

// brute and optimal 


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //  vector<int> ans;
        //  int a,b,l,r,m;
        // if(nums.size()==2)
        // {
        //     ans.push_back(0);
        //     ans.push_back(1);
        // }
        // else
        // {
        //   for(int i=0;i<nums.size();i++)
        //   {
        //       for(int j=i+1;j<nums.size();j++)
        //       {
        //           if((nums[i]+nums[j])==target)
        //           {
                     
        //                 ans.push_back(i);
        //                 ans.push_back(j);
                      
        //           }
        //       }
        //   }   
        // }
        // return(ans);
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        { 
            int n = nums[i];
            int moreNeeded= target-n;
            if(mpp.find(moreNeeded)!= mpp.end())
            {
                return{mpp[moreNeeded],i};
            }
            mpp[n]=i;
        }
        return{-1,-1};
    }
};