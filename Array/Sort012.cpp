/* Sort 0 1 2
Coding Ninja: https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=love-babbar-dsa-sheet-problems
Here is the solution*/
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
     int low=0, high=n-1, mid=0;
   while(mid<=high){
       if (arr[mid]==0){
           swap(arr[low], arr[mid]);
           mid++;
           low++;
       }
       else if (arr[mid]==1)
           mid++;
       else{
           swap(arr[mid], arr[high]);
           high--;
       }
   }
}
/*
eg ARR=[0,0,1,2,0,1,2]

Step 1:
mid=arr[0] that is 0
low=arr[0] that is 0
high=arr[n-1] that is 2
0 0 1 2 0 1 2
hree arr[mid]==0 so we will swap arr[mid] to arr[low] and increament mid and low by 1
0 0 1 2 0 1 2

Step 2:
mid=arr[1] that is 0
low=arr[1] that is 0
high=arr[n-1] that is 2
0 0 1 2 0 1 2
here arr[mid]==0 so we will swap arr[mid] to arr[low] and increament mid and low by 1
0 0 1 2 0 1 2

Step 3:
mid=arr[2] that is 1
low=arr[2] that is 1
high=arr[n-1] that is 2
0 0 1 2 0 1 2
here arr[mid] !=0 but arr [mid]==1 so we will increament mid by 1
0 0 1 2 0 1 2

Step 4:
mid=arr[3] that is 2
low=arr[2] that is 1
high=arr[n-1] that is 2
0 0 1 2 0 1 2
here arr[mid]!=0  and arr[mid]!=1 so we will swap arr[mid] to arr[high] and decreament high by 1
0 0 1 2 0 1 2

Step 5:
mid=arr[3] that is 2
low=arr[2] that is 1
high=arr[n-2] that is 1
0 0 1 2 0 1 2
here arr[mid]!=0  and arr[mid]!=1 so we will swap arr[mid] to arr[high] and decreament high by 1
0 0 1 1 0 2 2

Step 6:
mid=arr[3] that is 1
low=arr[2] that is 1
high=arr[n-3] that is 0
0 0 1 1 0 2 2
here arr[mid]!=0  and arr[mid]!=1 so we will ill swap arr[mid] to arr[high] and  decreament high by 1
0 0 1 0 1 2 2

Step 7:
mid=arr[3] that is 0
low=arr[2] that is 1
high=arr[n-4] that is 0
0 0 1 0 1 2 2
here arr[mid]==0 so we will swap arr[mid] to arr[low] and increament mid and low by 1
0 0 0 1 1 2 2

Step 8:
mid=arr[4] that is 1
low=arr[3] that is 1
high=arr[n-4] that is 1
here our mid and high are at the same position so we will come out the loop and print
0 0 0 1 1 2 2 that is sorted*/