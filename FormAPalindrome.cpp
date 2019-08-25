/*
Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is S.

Output:

Print the minimum number of characters.

Constraints:

1 ≤ T ≤ 50
1 ≤ S ≤ 40

Example:

Input:
3
abcd
aba
geeks

Output:
3
0
3
*/

#include<bits/stdc++.h>
using namespace std;

int lcs(string s,string r,int n)
{
    int i,j;
    int l[n+1][n+1];
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                l[i][j]=0;
            }
            else if(s[i-1]==r[j-1])
            {
                l[i][j]=(l[i-1][j-1]+1);
            }
            else
            {
                l[i][j]= max(l[i-1][j],l[i][j-1]);
            }
        }
    }
    
    return l[n][n];
}

int main()
 {  
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.size();    
        int i=0;
        int j=n-1;
        
        string r=s;
        
        while(i<j)
        {
            swap(r[i],r[j]);
            i++;
            j--;
        }
       
       int l = lcs(s,r,n);
       cout<<n-l<<endl;
	}
	return 0;
 }
