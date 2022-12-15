#ifndef CONTROLLERS_H_INCLUDED
#define CONTROLLERS_H_INCLUDED
#include <iostream>
#include "queueUser.h"
#include "stackPalyndrome.h"
#include "stackBinaryDecimal.h"

using namespace std;


void mainController();
void Result(adrInitial pointerBiner,queueUser &Queue);
void desimalToBiner(int biner,StackBinary &StackBiner);
string concatStacktoString(StackBinary &Stack1, StackBinary &Stack2);


#endif // CONTROLLERS_H_INCLUDED
