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
        {
            cout<<"Unable to open file\n";
            exit(0);
        }
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData(int size)
    {
        int ret = 0;
        char *Arr = new char[size];
        ret = read(fd,Arr,size);
        printf("%d\n",ret);
        write(1,Arr,ret);
        delete []Arr;
    }
};
int main()
{
    int no;
    char str[30];
    cout<<"Enter file name: \n";
    cin>>str;
    FileX obj(str);
    cout<<"Enter number of characters you want to read.\n";
    cin>>no;
    
    obj.ReadData(no);
    return 0;
}