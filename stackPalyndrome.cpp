#include "stackPalyndrome.h"
#include <typeinfo>

void createStack(StackPalyndrome &Stack)
{
    Stack.top = 0;
};

bool isEmpty(StackPalyndrome Stack)
{
    if (Stack.top == 0)
    {
        return true;
    }else
    {
        return false;
    }
};

bool isFull(StackPalyndrome Stack)
{
    if (Stack.top == NMAX)
    {
        return true;
    }else
    {
        return false;
    }
};

void push(StackPalyndrome &Stack, infotypeString info)
{
    if (isFull(Stack) == false)
    {
        Stack.top++;
        Stack.info[Stack.top] = info;
    }
};

void pop(StackPalyndrome &Stack, infotypeString &data)
{
    data = Stack.info[Stack.top];
    Stack.top--;
};

void printInfo(StackPalyndrome Stack)
{
    for (int i = Stack.top; i > 0; i--)
    {
        cout << Stack.info[i] << " ";
    }
    cout << endl;
};

bool isPalyndrome(string kode)
{

    StackPalyndrome Stack;
    int length = kode.size();

    // Finding the mid

    int i;
    int mid = length / 2;
    // Checking if the length of the string
    // is odd, if odd then neglect the
    // middle character
    for (i = 0; i < mid; i++) {
        push(Stack,kode[i]);
    }
    if (length % 2 != 0) {
        i++;
    }
    char elemen;

    while (kode[i] != '\0')
    {
        pop(Stack, elemen);

        // If the characters differ then the
        // given string is not a palindrome

        if (elemen != kode[i])

            return false;
        i++;
    }
    return true;
};
