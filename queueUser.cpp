#include "queueUser.h"

void createUserData(queueUser &Queue)
{
    Queue.head = NULL;
    Queue.tail = NULL;
};

void createElement(infotypeUser dataBaru, adrInitial &pointerData)
{
    pointerData = new element;
    pointerData->info.bulanLahir = dataBaru.bulanLahir;
    pointerData->info.kodeRahasia = dataBaru.kodeRahasia;
    pointerData->info.nama = dataBaru.nama;
    pointerData->info.tanggalLahir = dataBaru.tanggalLahir;
    pointerData->info.tahunLahir = dataBaru.tahunLahir;
    pointerData->next = NULL;
};

void enqueueUser(queueUser &Queue, adrInitial pointerData)
{
    if(Queue.head == NULL)
    {
        Queue.head = pointerData;
        Queue.tail = pointerData;
        pointerData->next = Queue.head;
    }
    else
    {
        Queue.tail->next = pointerData;
        Queue.tail = pointerData;
        pointerData->next = Queue.head;
    }

};

void dequeueUser(queueUser &Queue, adrInitial &pointerData)
{
    if (Queue.head == NULL)
    {
        cout << "Tidak ada data yang harus dihapus." << endl;
    }
    else if (Queue.head == Queue.tail)
    {
        pointerData = Queue.head;
        Queue.head = NULL;
        Queue.tail = NULL;
    }
    else
    {
        pointerData = Queue.head;
        Queue.head = Queue.head->next;
        Queue.tail->next = Queue.head;
        pointerData->next = NULL;
    }
};

void showUserData(queueUser Queue)
{
    adrInitial patrolPointer;
    patrolPointer = Queue.head;
    do
    {   cout << patrolPointer->info.tahunLahir << endl;
        cout << patrolPointer->info.bulanLahir << endl;
        cout << patrolPointer->info.kodeRahasia<< endl;
        cout << patrolPointer->info.nama<< endl;
        cout << patrolPointer->info.tanggalLahir<< endl;
        patrolPointer = patrolPointer->next;
    }
    while (patrolPointer != Queue.head);
};
