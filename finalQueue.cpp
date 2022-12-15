#include "finalQueue.h"

void createUserDataFinal(queueFinal &QueueFinal)
{
    QueueFinal.headFinal = NULL;
    QueueFinal.tailFinal = NULL;
};
void createElementFinal(infotypeFinal dataBaruFinal, adrFinal &pointerDataFinal)
{
    pointerDataFinal = new elementFinal;
    pointerDataFinal->infoFinal = dataBaruFinal;
    pointerDataFinal->nextFinal = NULL;
};
void enqueueUserFinal(queueFinal &QueueFinal, adrFinal pointerDataFinal)
{
    if(QueueFinal.headFinal == NULL)
    {
        QueueFinal.headFinal = pointerDataFinal;
        QueueFinal.tailFinal = pointerDataFinal;
        pointerDataFinal->nextFinal = QueueFinal.headFinal;
    }
    else
    {
        QueueFinal.tailFinal->nextFinal = pointerDataFinal;
        QueueFinal.tailFinal = pointerDataFinal;
        pointerDataFinal->nextFinal= QueueFinal.headFinal;
    }
};
void dequeueUserFinal(queueFinal &QueueFinal, adrFinal &pointerDataFinal)
{
    if (QueueFinal.headFinal == NULL)
    {
        cout << "Tidak ada data yang harus dihapus." << endl;
    }
    else if (QueueFinal.headFinal == QueueFinal.tailFinal)
    {
        pointerDataFinal = QueueFinal.headFinal;
        QueueFinal.headFinal = NULL;
        QueueFinal.tailFinal = NULL;
    }
    else
    {
        pointerDataFinal = QueueFinal.headFinal;
        QueueFinal.headFinal = QueueFinal.headFinal->nextFinal;
        QueueFinal.tailFinal->nextFinal = QueueFinal.headFinal;
        pointerDataFinal->nextFinal = NULL;
    }
};
void showUserDataFinal(queueFinal QueueFinal)
{
    adrFinal patrolPointer;
    patrolPointer = QueueFinal.headFinal;
    do
    {
        cout <<"Kode Rahasia dalam desimal: " <<patrolPointer->infoFinal << " dan sudah dimasukkan ke dalam QueueFinal." << endl;
        patrolPointer = patrolPointer->nextFinal;
    }
    while (patrolPointer != QueueFinal.headFinal);
};
