// Write a program to print following pattern of string on screen.
// Input : Hello
// Input : Hello
/*
H
H  e
H  e   l
H   e   l   l
H   e   l   l   o
 */
//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<iostream>
using namespace std;

//-----------------------------------------------------------------
// Function Name :  StringX
// Description   :  This function accept string from user 
//                  and display above pattern.    
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
    void Pattern()
    {
        char *ptr=str;
        char *s = str;
        int iCnt1 = 0, iCnt2 = 0;
        while(*ptr != '\0')
        {
            while(iCnt2 <= iCnt1)
            {
                cout<<*s<<"\t";
                s++;
                iCnt2++;
            }
            iCnt2 = 0;
            s = str;
            ptr++;
            iCnt1++;
            cout<<"\n";
        }
    }
};

int main()
{
    StringX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}
