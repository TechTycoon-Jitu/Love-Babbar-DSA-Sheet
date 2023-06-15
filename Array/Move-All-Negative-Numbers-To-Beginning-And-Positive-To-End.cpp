#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
   int i = 0;
   int size = nums.size()-1;
   int j = size;
   while(i<=j)
   {
     if (nums[i] >= 0 && nums[j] < 0) {
       swap(nums[i], nums[j]);
       i++;
       j--;
     }
     else if(nums[i]<0)
     {
         i++;
     }
     else if(nums[j]>=0)
     {
         j--;
     }
     else{
         i++;
         j--;
     }
   }
   return nums;
}
