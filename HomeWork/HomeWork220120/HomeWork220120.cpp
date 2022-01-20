#include <iostream>


// 바이트 패딩
// 
// 1. 클래스 내부에서 가장 바이트 크기가 
// 큰 자료형의 크기를 기준으로 잡는다.

// 2. 바이트 크기가 그보다 작은 자료형이 있다면
//    그 자료형의 바이트 크기를 가장 큰 자료형의 크기로 바꾼다.

// 3. 만약 그보다 작은 자료형들이 연속될경우
//    가장 큰 바이트로 묶어서 처리할수 있다면 묶는다.

class Player
{
    // 기준 8 

public:
    char Hp1;
    int Att; 
    __int64 Att1; // 8바이트
    char Hp;
    char Hp3[5];

};

// ????? 얼마?????
class Test
{
};


int main()
{
    // 00000000 00000000 00000000 00000000
    Player NewPlayer = Player();
    Test NewTest = Test();

    // -4589560
    int PlayerValue = (__int64)& NewPlayer;
    
    // -4589560
    int Hp1Value = (__int64)&NewPlayer.Hp1;
   
    // -4589556
    int AttValue = (__int64)&NewPlayer.Att;   
   
    // -4589552
    int Att1Value = (__int64)&NewPlayer.Att1;
    
    // -4589544
    int HpValue = (__int64)&NewPlayer.Hp;
    
    // -4589543
    int Hp3Value = (__int64)&NewPlayer.Hp3;

    // 24
    int PlayerSize = sizeof(NewPlayer);
    
    // 1
    int TestSize = sizeof(NewTest);

    int a = 0;

}
