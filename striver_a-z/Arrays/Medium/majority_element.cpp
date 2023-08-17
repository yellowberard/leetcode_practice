//https://leetcode.com/problems/majority-element/description/
//https://takeuforward.org/data-structure/find-the-majority-element-that-occurs-more-than-n-2-times/

// better approach- using hash maps
// optimal approach - MOORE VOTING ALGORITHM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
    //    map<int,int> elements;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         elements[nums[i]] ++;
    //     }
    //     map<int,int> :: iterator iter;
    //     for(iter = elements.begin();iter!=elements.end();iter++){
    //         if(iter->second>(nums.size()/2))
    //         {
    //             return iter->first;
    //         }
    //     }
    //     return 0;

    int element=0,count=0;
    for(int i=0; i<nums.size();i++){
        if(count==0)
        {
          element=nums[i];
        //   count=1;
        }
        if(element != nums[i])
        {
            count--;
        }else if( element == nums[i]){
            count++;
        }
    }
    int flag=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==element)
        {
            flag++;
        }
    }
    if(flag>nums.size()/2)
    return element;
    else
    return 0;
    }
};