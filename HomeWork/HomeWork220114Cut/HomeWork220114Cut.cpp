// HomeWork220114Cut.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{            
	int _ResultIndex = 0;

	for (int i = _Start; i < _End + 1; i += 1)
	{
		char LeftValue = _Sorce[i];

		_Result[_ResultIndex] = LeftValue;
		_ResultIndex += 1;
	}
}

int main()
{
	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		
		printf_s(Text);
	}

}

