/* Given an integer array of size N. For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller. If next element is smaller, print that element. If not, then print -1.
Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains 2 lines of input:
The first line contains an integer N, where N is the size of array.
The second line contains N integers(elements of the array) sperated with spaces.

Output:
For each test case, print the next immediate smaller elements for each element in the array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 107
1 ≤ arr[i] ≤ 1000

Example:
Input
2
5
4 2 1 5 3
6
5 6 2 3 1 7

Output
2 1 -1 3 -1
-1 2 -1 1 -1 -1

Explanation:
Testcase 1: Array elements are 4, 2, 1, 5, 3. Next to 4 is 2 which is smaller, so we print 2. Next of 2 is 1 which is smaller, so we print 1. Next of 1 is 5 which is greater, so we print -1. Next of 5 is 3 which is smaller so we print 3.  Note that for last element, output is always going to be -1 because there is no element on right.*/



#include<bits/stdc++.h>
using namespace std;

int main()
 {  
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,i;
        cin>>n;
        
        int arr[n];
        
        for(i=0;i<n;i++)
            cin>>arr[i];
            
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
                cout<<arr[i+1]<<" ";
            else
                cout<<"-1 ";
        }
        cout<<"-1"<<endl;
	}
	return 0;
 }
