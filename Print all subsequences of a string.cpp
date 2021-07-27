/*
way 1:
It can be done iteratively using 2 loops and one by one printing strings of length 1 ,2 , 3...so on 
TC = O(N^2)

way 2:
Use bit manipulation 

set ex: "abcd"  as 
         1111
         
then generate permutations 

I HAVE ALREADY DONE THIS IN BIT MANIPULATION POWER SET QUESTION

TC = O(n*2^n)

way 3:
The efficient approach would be using recursion
TC = O(N)
SC = O(N)

pick and non-pick approach
*/


#include<bits/stdc++.h>

using namespace std;

void printSubsequence(string input,string output,int length,int i)  //i is starting index
{
	//ek ek permutation recursively generate karte jaao
	
	//base case: agar apan string ke last me pohoche to ruk jaao and print the permutation formed so far
	if(i==length)
	{
		cout<<output<<endl;
	}
	else
	{
		//ek baar current character ko exclude karenge and aage badh jaaynege
		printSubsequence(input,output,length,i+1);
		
		//ab current character ko include karenge and aage badh jaayenge
		output=output+input[i];
		printSubsequence(input,output,length,i+1);
	}
	
}

int main()
{
	// output is set to null before passing in as a parameter
	
	//NOTE: "" bhi print hoga ouput me bcoz its also a possible permutation
	
    string output = "";
    string input = "abc";
 	int length=input.length();
    printSubsequence(input,output,length,0);
	return 0;
}
