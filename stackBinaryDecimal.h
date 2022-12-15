#ifndef STACKBINARYDECIMAL_H_INCLUDED
#define STACKBINARYDECIMAL_H_INCLUDED
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

typedef int infotype;

struct StackBinary{
    infotype info[15];
    int top;
};

void createstackdesibiner(StackBinary &S);
bool isemptydesibiner(StackBinary S);
bool isfulldesibiner(StackBinary S);
void pushdesibiner(StackBinary &S, infotype x);
void popdesibiner(StackBinary &S, infotype &x);
string BinerToString(StackBinary S);
void masukStackBiner(StackBinary &S, int number);
string integerToString(int number);
int StringToInteger(string String);
int binerkedes(StackBinary &S, int n);
#endif // STACKBINARYDECIMAL_H_INCLUDED
