// Write a program to find maximum numbers from array element using generic template.

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
//                  and display maximum number accessed behaviours using arrow.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

template <class T>
class Array
{
private:
    T * Arr;
    int iSize;
    
public:
    Array(int no)
    {
        iSize = no;
        Arr = new T[iSize];
    }
    ~Array()
    {
        delete []Arr;
    }
    void Accept()
    {
        cout<<"Enter the values: \n";
        for(int i = 0; i <iSize; i++)
        {
            cin>>Arr[i];
        }
    }
    T Maximum()
    {
        T Max = Arr[0];
        for(int i = 0;i < iSize; i++)
        {
            if(Arr[i] > Max)
            {
                Max = Arr[i];
            }
        }
        return Max;
    }
};

//-------------------------------------------------------------------
// Entry point function
//-------------------------------------------------------------------

int main()
{
    int iRet = 0;
    int iNo = 0;
    cout<<"Enter number of elements\n";
    cin>>iNo;

    Array <int> * obj = new Array<int>(iNo);
    
    obj->Accept();
    iRet = obj->Maximum();
    
    cout<<"Maximum number is : "<<iRet<<"\n";

    delete obj;
    return 0;
}