// Write a program to count length of linked list using generic template.

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
// Description   :  This function counts the length of linked list.    
// Author        :  Sneha Yogesh Choudhari
//-----------------------------------------------------------------

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
private:
    struct node<T> * Head;
    int iSize;
    
public:
    SinglyLL();
    void Display();
    int Count();
    void InsertFirst(T);
};

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> *newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;

    newn->next = Head;
    Head = newn;
    iSize++;
}

template <class T>
int SinglyLL<T> :: Count()
{
    return iSize;
}

template <class T>
void SinglyLL<T> :: Display()
{
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
SinglyLL<T> :: SinglyLL()
{
    Head = NULL;
    iSize = 0;
}


//-------------------------------------------------------------------
// Entry point function
//-------------------------------------------------------------------

int main()
{
    SinglyLL <double> obj;
    obj.InsertFirst(51.0);
    obj.InsertFirst(21.0);
    obj.InsertFirst(11.0);
    
    obj.Display();
    
    cout<<"Length of linked list is : "<<obj.Count()<<"\n";
    
    return 0;
}