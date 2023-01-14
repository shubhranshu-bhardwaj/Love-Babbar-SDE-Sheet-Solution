/* Rotate Array
Coding Ninja: https://www.codingninjas.com/codestudio/problems/rotate-array_1230543?topList=love-babbar-dsa-sheet-problems
Here is the solution
*/
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    
    int k;
    cin>>k;
    
    int temp[k];
    for(int i = 0; i<k; i++) temp[i] = a[i];
    for(int i = k; i<n; i++) a[i-k] = a[i];
    for(int i = 0; i<k; i++) a[n-k+i] = temp[i];
    
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}
/*
eg n=8
ARR=[7,5,2,11,2,43,1,1]
k=2
Now we will create a temporary array of size k
and we will run a loop from i=0 to i<k and we will store the value
temp[0]=a[0]--> temp[0]=7
temp[1]=a[1]--> temp[1]=5
in the next loop we will shift array to the left from i=k to i<n
a[i-k]=a[i]-->a[2-2]=a[0]-->a[0]=a[2]-->a[0]=2
a[i-k]=a[i]-->a[3-2]=a[1]-->a[1]=a[3]-->a[1]=11 and so on
in the last loop we will start loop from i=0 to i<k and store the value in a which we have stored in temporary array
a[n-k+i]=temp[i]-->a[8-2+0]=temp[0]-->a[6]=temp[0]-->a[6]=7
a[n-k+i]=temp[i]-->a[8-2+1]=temp[1]-->a[7]=temp[0]-->a[7]=5
So the final result will be
2 11 2 43 1 1 7 5*/