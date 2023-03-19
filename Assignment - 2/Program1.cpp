// Write a program to print length of string on screen.

//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<iostream>
using namespace std;

//-----------------------------------------------------------------
// Function Name :  StrlenX
// Description   :  This function accept string from user 
//                  and display length of string.    
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
    int StrlenX()
    {
        int iCnt = 0;
        char *ptr = str;
		
        while(*ptr != '\0')
        {
            ptr++;
            iCnt++;
        }
        return iCnt;
    }
};

int main()
{
    int ret = 0;
	
    StringX obj;
	
    obj.Accept();
	
    ret = obj.StrlenX();
	
    cout<<"String length is : "<<ret<<"\n";
	
    return 0;
}
