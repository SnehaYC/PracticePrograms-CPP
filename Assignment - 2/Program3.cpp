// Write a program to reverse string and print it on screen.
// Input : _ _Abc_ _ _ p15_ _ _&_ _ AB_ _
// Output : _ _cbA_ _ _ 51p_ _ _& _ _BA_ _
// In place word reverse without using any other memory

//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<iostream>
using namespace std;

//-----------------------------------------------------------------
// Function Name :  StringX
// Description   :  This function accept string from user 
//                  and display the reverse of string.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String: \n";
        scanf("%[^'\n']s",str);
    }
    void WordReverse()
    {
        // Logic
    }
};
int main()
{
    int ret = 0;
    StringX obj;
    obj.Accept();
    obj.WordReverse();
    cout<<obj.str;
    return 0;
}