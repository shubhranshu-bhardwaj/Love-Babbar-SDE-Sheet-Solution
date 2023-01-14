/* Reverse the array
Coding Ninja:- https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?topList=love-babbar-dsa-sheet-problems
*/
//Coding Ninja Question solution
/*Problem Statement
Given an array of integers and a position M.
You have to reverse the array after that position
ARR=[1,2,3,4,5,6] and M=3
Output will be [1,2,3,4,6,5]

*/
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int start=m+1; //we will take starting point as m+1
    int end=arr.size()-1; //end point will be size-1
    while(start<=end){ //we will swap the array until start<=end
        //swap(arr[start], arr[end]); //this is inbuilt function we will get ans using this but it's not an ideal approach
        int temp=arr[start]; //we will create a temprory var where we will store the value of our starting point
        arr[start]=arr[end]; //now at the starting point we will store the value of ending point                    
        arr[end]=temp;   //and at the ending point we will store the value of temp var that is value of starting point
        start++; //will increament start by 1 and decreament end by 1
        end--;
    }
}
