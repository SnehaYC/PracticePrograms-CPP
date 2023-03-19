// Write a program to print following pattern of string on screen.
// Input : Hello
/*
 H  e   l   l   o
 H  e   l   l
 H  e   l
 H  e
 H
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
        int iCnt = 0;
        while(*ptr != '\0')
        {
            while(*(s+iCnt)!= '\0')
            {
                cout<<*s<<"\t";
                s++;
            }
            s = str;
            ptr++;
            iCnt++;
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
