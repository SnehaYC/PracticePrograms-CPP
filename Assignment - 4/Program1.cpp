// Write a program to open file.

//-----------------------------------------------------------------
// Header file and Macros
//-----------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;

// O_RDONLY         Read
// O_WRONLY        Write
// O_RDWR           Read & Write

//-----------------------------------------------------------------
// Function Name :  FileX
// Description   :  This function accept file name from user 
//                  and open that file.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to open file.\n";}
        else
        {cout<<"File succesfully opened..\n";}
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
