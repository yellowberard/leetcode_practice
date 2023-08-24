//https://takeuforward.org/data-structure/move-all-zeros-to-the-end-of-the-array/

//https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int p1=0,p2=nums.size()-1;
        // while(p1<=p2){
        //     if(nums[p1]!=0){
        //         p1++;
        //     }else{
        //         for(int i=p1;i<p2;i++){
        //             nums[i]=nums[i+1];
        //         }
        //         nums[p2]=0;
        //         p2--;
        //     }
        // }
        int i=0,j=-1;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j<0){
            return;
        }
        for(i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
     
    }
};