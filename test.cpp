#include "finalQueue.h"

void test()
{
    queueFinal Final;
    createUserDataFinal(Final);

    adrFinal pointerFinal;
    createElementFinal(10,pointerFinal);

    enqueueUserFinal(Final,pointerFinal);
    createElementFinal(20,pointerFinal);

    enqueueUserFinal(Final,pointerFinal);
    showUserDataFinal(Final);
};
