/* Sum of Max and Min
Coding Ninja: https://www.codingninjas.com/codestudio/problems/sum-of-max-and-min_1081476?topList=love-babbar-dsa-sheet-problems
Problem Statement:
You are given an array of N. Your taskm is to find 
out the sum of maximum and minimum elements in the array
ARR=[1,2,3,4,5,6,6,6]
Size=7
Output=7
Here is the solution*/
#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
    int mini=arr[0];
    int maxi=arr[0];
    int sum=0;
    for(int i=1;i<n;i++){
        mini=min(mini,arr[i]); //comparing and finding minimum element
    }
    
    for(int i=1;i<n;i++){
        maxi=max(maxi,arr[i]);  //maximum element
    }
    sum=mini+maxi;
    return sum;
}  
