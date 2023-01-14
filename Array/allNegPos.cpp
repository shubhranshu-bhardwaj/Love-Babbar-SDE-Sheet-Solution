/*Move All Negative Numbers To Beginning And Positive To End
Coding Ninja: https://www.codingninjas.com/codestudio/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620?topList=love-babbar-dsa-sheet-problems
Here is the solution
*/
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
       int check = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i]<0) swap(nums[check++],nums[i]);
    }
    
    return nums;
}
/*
eg 1 2 -3 -5 4 -2
Step 1:
check=0
i=0
1 2 -3 -5 4 -2
nums[0] that  is 1 and 1>0
1 2 -3 -5 4 -2

Step 2:
check=0
i=1
1 2 -3 -5 4 -2
nums[1] that is 2 and 2>0
1 2 -3 -5 4 -2

Step 3:
check=0
i=2
1 2 -3 -5 4 -2
nums[2] that is -3 and -3<0 so we will swap nums[check] and nums[i] and increament check by 1 
-3 2 1 -5 4 -2

Step 4:
check=1
i=3
-3 2 1 -5 4 -2
nums[3] that is -5  and -5<0 so we will swap nums[check] and nums[i] and increament check by 1
-3 -5 1 2 4 -2

Step 5:
check=2
i=4
-3 -5 1 2 4 -2
nums[4] that is 4  and 4>0
-3 -5 1 2 4 -2

Step 6:
check=2
i=5
-3 -5 1 2 4 -2
mums[5] that is -2 and -2<0 so we will swap nums[check] and nums[i] and increament check by 1
-3 -5 -2 2 4 1
Now i will be 6 that is equal to n so we will come out from the loop and print our last step*/