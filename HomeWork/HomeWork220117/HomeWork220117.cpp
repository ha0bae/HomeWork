
#include <iostream>

//두 개 검색만 됨.... 

int StartStringCount(const char* _Left)
{
    int StartCount = 0;

    while (0 != _Left[StartCount])
    {
        StartCount += 1;
    }

    return StartCount;
    //
   
}

int EndStringCount(const char* _Left)
{
    int EndCount = 0;

    while (0 != _Left[EndCount])
    {
        EndCount += 1;
    }
   
    return EndCount;
}

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int StartCount = StartStringCount(_Text);
    int EndCount = EndStringCount(_FindStr);

    int StartValue = 0;
    int EndValue = 0;
    int forCount = 0;
    
    // eee = 303
    for (int i = 0; i < EndCount; i += 1)
    {
        StartValue += _FindStr[i];
        int a = 0;
    }
    // 97 98 99 100 101
    //  0123       01
    // "adee", 0, "ee" 

    for (int i = _Start; i < StartCount; i += 1)
    {
        EndValue += _Text[i]; // +_Text[i + 1];

        if (StartValue == EndValue)
        {
            return forCount - EndCount + 1;
        }

        forCount += 1;

        if (forCount % EndCount == 0)
        {
           EndValue = 0;
        }

        
    }

    return -1;
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
    int StartCount = StartStringCount(_Text);
    int EndCount = EndStringCount(_FindStr);

    int StartValue = 0;
    int EndValue = 0;
    int forCount = 0;

    // ee = 202
    for (int i = 0; i < EndCount; i += 1)
    {
        StartValue += _FindStr[i];
        int a = 0;
    }
    // 97 01
    //  0123       01
    // "aeea", 4, "ee" 
    for (int i = 0; i < StartCount; i += 1)
    {
        EndValue += _Text[_End - i];

        if (StartValue == EndValue)
        {
            return forCount - EndCount + 1;
        }

        forCount += 1;

        if (forCount % EndCount == 0)
        {
            EndValue = 0;
        }


    }
    return -1;
}


int main()
{
    // 실패
    {
        
        int Count = CountFirst("adee", 0, "ee");
        int a = 0;

    }
    {
        int Count = CountLast("aeeab", 4, "ee");
        int a = 0;
    }



}
