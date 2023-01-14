/* Kth Smallest and Largest Element of Array
Coding Ninja: https://www.codingninjas.com/codestudio/problems/kth-smallest-and-largest-element-of-array_1115488?topList=love-babbar-dsa-sheet-problems
Here is the solution
*/
#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    std:sort(arr.begin(),arr.end());    
    vector<int> ans;           
    ans.push_back(arr[k-1]);    
    ans.push_back(arr[n-k]);        
    return ans; 
}