#include "controllers.h"
#include "stackPalyndrome.h"
#include "queueUser.h"
#include "stackBinaryDecimal.h"
#include "finalQueue.h"
#include <iostream>

using namespace std;

infotypeUser inputUserData()
{
    string nama;
    int bulanLahir;
    int tanggalLahir;
    int tahunLahir;
    string kode;
    infotypeUser data;
    cout <<"Silahkan masukkan data Anda:" << endl;
    cout << endl;
    cout << "Input Nama: ";
    cin  >> nama;
    cout << "Input tanggal lahir (1-31): ";
    cin  >> tanggalLahir;
    cout << "Input bulan lahir (1-12): ";
    cin  >> bulanLahir;
    cout << "Input tahun lahir: ";
    cin >> tahunLahir;
    cout << "Input kode unik palindrome: ";
    cin >> kode;

    //Inisialisasi Queue
    while (!isPalyndrome(kode))
    {
        cout << "Kode tidak palyndrome, mohon diulang. ";
        cout << "Input Kode unik palindrome: ";
        cin >> kode;
    };
    //Masukkan input ke infotype
    data.kodeRahasia = kode;
    data.nama = nama;
    data.tanggalLahir = tanggalLahir;
    data.bulanLahir = bulanLahir;
    data.tahunLahir = tahunLahir;
    return data;
};
int popStackWithFallBack( bool isEmpty, StackBinary &PrimaryStack, StackBinary &FallBackStack)
{
    int dataFinal;
    if (isEmpty)
    {
        popdesibiner(FallBackStack,dataFinal);
    }
    else
    {
        popdesibiner(PrimaryStack,dataFinal);
    };
    return dataFinal;
};

void mainController()
{
    //Deklarasi Tipe Data
    infotypeUser data;
    queueUser Queue;
    adrInitial pointerData;
    createUserData(Queue);

    cout <<"-----SELAMAT DATANG-----" << endl;
    cout << endl;

    data = inputUserData();
    createElement(data,pointerData);
    enqueueUser(Queue,pointerData);
    cout << endl;
    char yn;
    cout << "Apakah masih akan input data lagi? (y/n) " ;
    cin >> yn;
    cout << endl;
    while (yn != 'n')
    {
        switch (yn)
        {
        case 'y':
            data = inputUserData();
            createElement(data,pointerData);
            enqueueUser(Queue,pointerData);
            cout << "Apakah masih akan input data lagi? (y/n) " ;
            cin >> yn;
            break;
        case 'n':
            break;
        }

    }
    adrInitial pointerBiner;
    pointerBiner = Queue.head;
    do{
        Result(pointerBiner,Queue);
        pointerBiner = pointerBiner->next;
    }while (pointerBiner != Queue.head);


}

void desimalToBiner(int biner,StackBinary &StackBiner)
{
    createstackdesibiner(StackBiner);
    masukStackBiner(StackBiner,biner);
};

string concatStacktoString(StackBinary &Stack1, StackBinary &Stack2)
{
    string resultFinal = "";
    string dataFinalString;
    int dataFinal;
    int index = 1;

    while(!isemptydesibiner(Stack1)|| !isemptydesibiner(Stack2))
    {
        if (index % 2 == 0 )
        {
            dataFinal = popStackWithFallBack(isemptydesibiner(Stack2),Stack2,Stack1);
        }
        else
        {
            dataFinal = popStackWithFallBack(isemptydesibiner(Stack1),Stack1,Stack2);
        }
        dataFinalString = integerToString(dataFinal);
        resultFinal += dataFinalString;
        index++;
    };
    return resultFinal;
};

void Result(adrInitial pointerBiner,queueUser &Queue)
{
    int bulanDesimal;
    int tanggalDesimal;
    string bulanBiner;
    string tanggalBiner;

    bulanDesimal = pointerBiner->info.bulanLahir;
    tanggalDesimal = pointerBiner->info.tanggalLahir;

    StackBinary stackTanggal;
    StackBinary stackBulan;

    desimalToBiner(bulanDesimal,stackBulan);
    desimalToBiner(tanggalDesimal,stackTanggal);

    cout << "Bulan lahir pengguna: " << bulanDesimal << endl;
    cout << "Tanggal lahir pengguna: " << tanggalDesimal << endl;
    cout << endl;

    cout << "Bulan lahir pengguna dalam bilangan biner: " << BinerToString(stackBulan) << endl;
    cout << "Tanggal lahir pengguna dalam bilangan biner: " << BinerToString(stackTanggal) << endl;
    cout << endl;

    string resultFinal = concatStacktoString(stackBulan,stackTanggal);

    cout << "Kode rahasia yang tergenerasi adalah: " << resultFinal;
    cout << endl;

    int finalInt;
    finalInt = StringToInteger(resultFinal);

    StackBinary stackDesimal;
    createstackdesibiner(stackDesimal);

    int finalDesimal;
    finalDesimal = binerkedes(stackDesimal,finalInt);
    cout << "Kode rahasia yang tergenerasi dalam desimal adalah : " << finalDesimal << endl;
    cout << endl;

    queueFinal Final;
    createUserDataFinal(Final);
    Final.headFinal = NULL;
    Final.tailFinal = NULL;
    adrFinal pointerFinal;
    createElementFinal(finalDesimal,pointerFinal);
    enqueueUserFinal(Final,pointerFinal);
    showUserDataFinal(Final);

};

