
#include <iostream>

//두 개 검색만 됨.... 

int StringLength(const char* _Left)
{
    int StartCount = 0;

    while (0 != _Left[StartCount])
    {
        StartCount += 1;
    }

    return StartCount;
}

bool StringCompare(const char* _Left, const char* _Right)
{
    //"aaae ttt asdfasd ee"
    // "ee"
    int i = 0;
    for (; 0 != _Left[i] && 0 != _Right[i]; )
    {
        if (_Left[i] != _Right[i])
        {
            return false;
        }
        i += 1;
    }
    return true;
}


int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int StartCount = StringLength(_Text);
    int EndCount = StringLength(_FindStr);
    //"aaae ttt asdfasd ee"
    // ee
    for (int i = _Start; i < StartCount; i += 1)
    {
        if (_Text[i] == _FindStr[0])
        {
             if (true == StringCompare(&_Text[i], &_FindStr[0]))
            {
                return i;
            } 

        }
        
    }

    return -1;
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
    int StartCount = StringLength(_Text);
    int EndCount = StringLength(_FindStr);

    for (int i = 0; i < StartCount; i += 1)
    {
        if (true == StringCompare(&_Text[_End - i - 1], &_FindStr[0]))
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    // 실패
    {
        
        int Count = CountFirst("aaae ttt asdfasd ee", 0, "ee");
        int a = 0;

    }
    {
        //2
        int Count = CountLast("aee eea", 6, "ee");
        int a = 0;
    }



}
