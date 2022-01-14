// HomeWork.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{
	int LeftIndex = 0;
	int RightIndex = 0;

	for (int LeftIndex = 0; 0 != _Left[LeftIndex]; LeftIndex += 1)
	{
		char ValueLeft = _Left[LeftIndex];
		char ValueRight = _Right[LeftIndex];

		if (96 < _Left[LeftIndex])
		{
			_Right[RightIndex] = _Left[LeftIndex] - 32;
			RightIndex += 1;
		}
		else
		{
			_Right[RightIndex] = _Left[LeftIndex];
			RightIndex += 1;
		}
	}

}

int main()
{

	{
		///char Value = 'd';
		
		char Text[100] = {};

		ToUpper("12shd3jk5haHF", Text);
		//      "ABC"
		// 'a' = 97		b 98
		// 'A' = 65		B 66
		// 32		
		
		printf_s(Text);

	}


}
