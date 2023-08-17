//https://takeuforward.org/data-structure/remove-duplicates-in-place-from-sorted-array/

//My approach using maps- better approach
//optimal approach
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int,int> unique;
        // for(int i=0;i<nums.size();i++){
        //     if(unique.find(nums[i])== unique.end()){
        //         unique[nums[i]]=i;
        //     }
        // }
        // map<int,int>::iterator iter;
        // int j=0;
        // for(iter= unique.begin();iter!=unique.end();++iter){
          
        //     nums[j]=iter->first;
        //     // cout<<nums[j]<<" ";
        //     j++;
        // }
        
        // // cout<< unique.size();
        // return unique.size();

        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};