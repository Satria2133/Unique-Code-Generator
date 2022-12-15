#include "stackBinaryDecimal.h"

void createstackdesibiner(StackBinary &S)
{
    S.top = 0;
}

bool isemptydesibiner(StackBinary S)
{
    if (S.top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isfulldesibiner(StackBinary S)
{
    if (S.top == 15)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pushdesibiner(StackBinary &S, infotype x)
{
    if (isfulldesibiner(S) == false)
    {
        S.top = S.top + 1;
        S.info[S.top] = x;
    }
}

void popdesibiner(StackBinary &S, infotype &x)
{
    x = S.info[S.top];
    S.top--;
}

void masukStackBiner(StackBinary &S, int number)
{
    while(number > 0)
    {
        int remainder = number % 2;
        number = number / 2;
        pushdesibiner(S, remainder);
    }
};

string BinerToString(StackBinary S)
{
    string result;
    while (isemptydesibiner(S) == false)
    {
        stringstream ss;
        string binary;
        int item;
        item = S.top;
        popdesibiner(S,item);
        ss << item;
        ss >> binary;
        result += binary;
    }
    return result;
}

string integerToString(int number)
{
    string String;
    stringstream ss;
    ss << number;
    ss >> String;
    return String;
};

int StringToInteger(string String)
{
    int number;
    stringstream ss;
    ss << String;
    ss >> number;
    return number;
};

int binerkedes(StackBinary &S, int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}
