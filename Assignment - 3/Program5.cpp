// Write a program to print following pattern of string on screen.
// Input : 1234
/*
4   3   2   1
4   3   2
4   3
4
 */
//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<iostream>
using namespace std;

//-----------------------------------------------------------------
// Function Name :  StringX
// Description   :  This function accept number from user 
//                  and display above pattern.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

class NumberX
{
public:
    int iNo;
    void Accept()
    {
        cout<<"Enter Number: \n";
        cin>>iNo;
    }
    void Pattern()
    {
        int iValue = iNo,iCnt = 0, i = 0, j = 0;
        while(iValue > 0)
        {
            iCnt++;
            iValue = iValue / 10;
        }
        iValue = iNo;
        for(i = iCnt ; i > 0; i--)
        {
            for(j = 0; j< i; j++)
            {
                cout<<iValue % 10<<"\t";
                iValue = iValue / 10;
            }
            cout<<"\n";
            iValue = iNo;
        }
        
    }
};
int main()
{
    NumberX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}
