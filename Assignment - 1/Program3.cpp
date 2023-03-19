// Write a program to print addition of two numbers on screen.

//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<iostream>
using namespace std;

//-----------------------------------------------------------------
// Function Name :  Addition and Substraction
// Input         :  Integer
// Output        :  Integer
// Description   :  These functions accept numbers from user and 
//                  display the output.
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

class Arithematic
{
	public: 
	
    int iNo1,iNo2;             
    Arithematic(int x, int y)   
    {
        iNo1 = x;
        iNo2 = y;
    }
    int Addition()              
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }
    int Substraction()      
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }
};

int main()
{
    int iRet1 = 0, iRet2 = 0;
    int i = 0,j = 0;
	
    cout<<"Enter first number"<<"\n";
    cin>>i;
    cout<<"Enter second number"<<"\n";
    cin>>j;
    
    Arithematic obj1(i,j);       
    
    cout<<"Enter first number"<<"\n";
    cin>>i;
    cout<<"Enter second number"<<"\n";
    cin>>j;
    
    Arithematic obj2(i,j);
    
    iRet1 = obj1.Addition();
    cout<<"Additon is :"<<iRet1<<"\n";
    
    iRet2 = obj2.Substraction();
    cout<<"Substraction is : "<<iRet2<<"\n";
    
    return 0;
}