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

//  stdin      Standard input device       Keyboard        0
//  stdout     Standard output device      Monitor         1
//  stderr     Standard Error device       Monitor         2

//-----------------------------------------------------------------
// Function Name :  FileX
// Description   :  This function accept file name from user 
//                  and read number of characters which user wants     
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
        {   cout<<"Unable to open file\n";}
        else
        {cout<<"File succesfully opened..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData(int size)
    {
        char Arr[20] = {'\0'};
        read(fd,Arr,size);
        printf("%s",Arr);
    }
};
int main()
{
    int no;
    char str[30];
    cout<<"Enter file name:\n";
    cin>>str;
    FileX obj(str);
    cout<<"Enter number of characters you want to read: \n";
    cin>>no;
    
    obj.ReadData(no);
    return 0;
}