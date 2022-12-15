#ifndef TUGASBESAR_H_INCLUDED
#define TUGASBESAR_H_INCLUDED
#include <iostream>

using namespace std;
//Deklarasi queue inputan user
struct identitas
{
    string nama;
    int tanggalLahir;
    int bulanLahir;
    int tahunLahir;
    string kodeRahasia;
};
typedef identitas infotypeUser;
typedef struct element *adrInitial;
struct queueUser
{
    adrInitial head;
    adrInitial tail;
};
struct element
{
    infotypeUser info;
    adrInitial next;
};
void createUserData(queueUser &Queue);
void createElement(infotypeUser dataBaru, adrInitial &pointerData);
void enqueueUser(queueUser &Queue, adrInitial pointerData);
void dequeueUser(queueUser &Queue, adrInitial &pointerData);
void showUserData(queueUser Queue);

void test();

#endif // TUGASBESAR_H_INCLUDED
