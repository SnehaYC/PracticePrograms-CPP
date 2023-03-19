// Write a program to write the content of file and display it on screen.

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
//                  and write the content in file.   
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY);
        if(fd == -1)
        {
            cout<<"Unable to open file\n";
            exit(0);
        }
        else
        {cout<<"File succesfully opened..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void WriteData()
    {
        char str[] = "Pune";
        write(fd,str,4);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name: \n";
    cin>>str;
    FileX obj(str);
    
    obj.WriteData();
    return 0;
}