// Write a program to print addition of two numbers on screen.

//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<iostream>
using namespace std;

//-----------------------------------------------------------------
// Function Name :  Addition
// Input         :  Integer
// Output        :  Integer
// Description   :  This function accept two numbers from user and 
//                  display the output.
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

int Addition(int iNo1, int iNo2)
{
	int iResult = 0;
	iResult = iNo1 + iNo2;
	return iResult;
}


int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	cout<<"Enter first number: \n";
	cin>>iValue1;
	
	cout<<"Enter second number: \n";
	cin>>iValue2;
	
	iRet = Addition(iValue1,iValue2);
	
	cout<<"Addition of "<<iValue1<<" and "<<iValue2<<" is: "<<iRet<<"\n";
	
	return 0;
	
}