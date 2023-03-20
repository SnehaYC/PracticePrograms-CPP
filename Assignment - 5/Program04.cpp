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
//                  and display maximum number.    
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
    // Array obj(5);
    Array <int>obj1(5);         
    
    obj1.Accept();
    iRet = obj1.Maximum();
    cout<<"Maximum is : "<<iRet<<"\n";
    
    double dRet = 0.0;
    Array <double>obj2(5);
    
    obj2.Accept();
    dRet = obj2.Maximum();
    cout<<"Maximum is : "<<dRet<<"\n";
    return 0;
}