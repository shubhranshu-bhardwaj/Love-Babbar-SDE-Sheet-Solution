/* Maximum Subarray Sum
Coding Ninja: https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?topList=love-babbar-dsa-sheet-problems
Sample Input: ARR=[1 2 7 -4 3 2 -10 9 1]
Sample Output= 11
Here is the solution
*/
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
      long long currSum = 0;
    long long mx = INT_MIN;
    for( int i = 0; i < n; i++){
        currSum += arr[i];
        if( currSum < 0){
            currSum = 0;
        }
        mx = max( currSum , mx );
    }
    return mx;
}
/*
eg ARR=[1 2 7 -4 3 2 -10 9 1]
currSum=0
mx=INT_MIN;
for i=0
currSum=currSum+arr[0]=0+1=1
mx=1
for i=1
currSum=currSum+arr[1]=1+2=3
mx=3 because 3>1
for i=2
currSum=currSum+arr[2]=3+7=10
mx=10 because 10>3
and so on..
There is an edge case if currSum wiil be less than 0 then currSum will be 0*/
