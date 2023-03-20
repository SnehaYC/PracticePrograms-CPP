// Write a program to find largest numbers from two numbers using generic template.

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
// Function Name :  Maximum
// Description   :  This function accept two numbers from user 
//                  and display largest number.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

template <class T>
T Maximum(T Arr[], int iSize)
{
    T iMax = Arr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

//-------------------------------------------------------------------
// Entry point function
//-------------------------------------------------------------------

int main()
{
    float *arr = NULL;
    int iSize;
    float iRet;
    
    cout<<"Enter number of elements\n";
    cin>>iSize;
    
    arr = new float[iSize];
    
    printf("Enter the values\n");
    for(int i = 0; i < iSize; i++)
    {
        cin>>arr[i];
    }
    
    iRet = Maximum(arr,iSize);
    cout<<"Largest number is : "<<iRet<<"\n";
    
    delete []arr;
    
    return 0;
}
