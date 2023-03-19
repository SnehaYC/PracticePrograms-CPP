// Write a program to create file.

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
// Function Name :  FileX
// Description   :  This function accept file name from user 
//                  and create that file.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

class FileX
{
public:
    int fd;
    
    FileX(char Name[])  
    {
        fd = creat(Name,0777);
        if(fd == -1)
        {   cout<<"Unable to create file.\n";}
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
};
int main()
{
    char str[30];           
    cout<<"Enter file name: \n";
    cin>>str;
    FileX obj(str);    
    return 0;
}