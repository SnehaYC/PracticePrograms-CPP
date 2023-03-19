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
//                  and read number the content of file using while loop    
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
        {
            cout<<"Unable to Open file.\n";
            exit(0);
        }
        else
        {cout<<"File succesfully Opened..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData()
    {
        char Arr[10];
        int ret = 0;
        
        while((ret = read(fd,Arr,10)) != 0)
        {
            printf("%d\n",ret);
            write(1,Arr,ret);
        }
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