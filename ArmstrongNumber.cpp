#include<bits/stdc++.h>

using namespace std;

int noOfDigits(int num)
{
	int i=0;
	
	while(num)
	{
		i++;				//153 is consist of 3 digits 
		num = num/10;
	}
	
	return i;				// 3 is returned
	
}


bool anagram(int num)
{
	int sum =0;
	int n = noOfDigits(num);
	int temp = num;
	
	while(temp)
	{
		int rem = temp % 10;
		sum += pow(rem,n);						//in 1st iteration sum = 0 + pow(3,3);
		temp /= 10;							   //	in 2nd sum = 27 + pow(5,3);   in 3rd sum = 152 + pow(1,3);				
	}
	
	if(sum==num)
		return true;
	else
		return false;	
}


int main()
{
	int num = 153;
	bool ans = anagram(num);
	
	if(ans)
		cout<<"Aramstrong Number";
	else
		cout<<"Not Armstrong Number";
}
