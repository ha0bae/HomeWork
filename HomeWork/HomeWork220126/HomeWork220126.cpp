#include <iostream>

class MyInt
{
public:

    int Value;

public:
    MyInt operator++()
    {
        Value += 1;

        return *this;
    }

    MyInt operator++(int)
    {
        MyInt temp(*this);
        Value += 1;

        return temp;
    }
    MyInt operator--()
    {
        Value -= 1;

        return *this;
    }
    MyInt operator--(int)
    {
        MyInt temp(*this);
        Value -= 1;

        return temp;
    }
public:
    MyInt(int _Value)
        : Value(_Value)
    {

    }
};

int main()
{
    int Value = 0;
    int Result = 0;

    Result = ++Value;

    Result = 0;
    Result = Value++;


    MyInt MyValue = 0;
    MyInt MyResult = 0;

    // ++ 쓰지마세요
    MyResult = ++MyValue;
    MyResult = 0;
    MyResult = MyValue++;

    MyResult = 0;
    MyResult = --MyValue;
    MyResult = 0;
    MyResult = MyValue--;
}
