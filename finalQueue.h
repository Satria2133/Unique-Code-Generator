#ifndef FINALQUEUE_H_INCLUDED
#define FINALQUEUE_H_INCLUDED
#include <iostream>
#include "queueUser.h"
#include "stackPalyndrome.h"
#include "stackBinaryDecimal.h"
;
using namespace std;

typedef int infotypeFinal;

typedef struct elementFinal *adrFinal;

struct elementFinal
{
    infotypeFinal infoFinal;
    adrFinal nextFinal;
};

struct queueFinal
{
    adrFinal headFinal;
    adrFinal tailFinal;
};

void createUserDataFinal(queueFinal &QueueFinal);
void createElementFinal(infotypeFinal dataBaruFinal, adrFinal &pointerDataFinal);
void enqueueUserFinal(queueFinal &QueueFinal, adrFinal pointerDataFinal);
void dequeueUserFinal(queueFinal &QueueFinal, adrFinal &pointerDataFinal);
void showUserDataFinal(queueFinal QueueFinal);
#endif // FINALQUEUE_H_INCLUDED
