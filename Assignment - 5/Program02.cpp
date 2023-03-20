// Write a program to find maximum of two numbers using generic template.

//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;

//-----------------------------------------------------------------
// Function Name :  SwapX
// Description   :  This function accept two numbers from user 
//                  and display maximum number.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

template <class T>
T Max(T iNo1, T iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

//-------------------------------------------------------------------
// Entry point function
//-------------------------------------------------------------------

int main()
{
    int iValue1 , iValue2, iRet = 0 ;
    
    cout<<"Enter first value\n";
    cin>>iValue1;
    
    cout<<"Enter second value\n";
    cin>>iValue2;
	
    iRet = Max(iValue1, iValue2);
    cout<<"Maximum is : "<<iRet<<"\n";
	
    return 0;
}
