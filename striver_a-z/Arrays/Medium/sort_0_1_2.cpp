//https://leetcode.com/problems/sort-colors/submissions/
//https://takeuforward.org/data-structure/sort-an-array-of-0s-1s-and-2s/
// Optimal solution
// Dutch National flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1,i=0;
        while(mid<=high)
        { 
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};