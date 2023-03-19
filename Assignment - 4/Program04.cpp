// Write a program to read the content of file and display it on screen.

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
//                  and read the content of file.    
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
        {   cout<<"Unable to create file\n";}
        else
        {cout<<"File succesfully opened..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData()
    {
        char Arr[20] = {'\0'};
        read(fd,Arr,10);
        printf("%s",Arr);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name: \n";
    cin>>str;
    FileX obj(str);
    obj.ReadData();
    return 0;
}