#ifndef STACKPALYNDROME_H_INCLUDED
#define STACKPALYNDROME_H_INCLUDED
#include <bits/stdc++.h>
#include <iostream>


using namespace std;

typedef char infotypeString;

const int NMAX = 999;

struct StackPalyndrome
{
    infotypeString info[NMAX];
    int top;
};

void createStack(StackPalyndrome &Stack);

bool isEmpty(StackPalyndrome Stack);

bool isFull(StackPalyndrome Stack);

void push(StackPalyndrome &Stack, infotypeString info);

void pop(StackPalyndrome &Stack, infotypeString &data);

void printInfo(StackPalyndrome Stack);

bool isPalyndrome(string kode);

#endif // STACKPALYNDROME_H_INCLUDED
