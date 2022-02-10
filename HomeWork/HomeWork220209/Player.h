#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

// 설명 :
class Player
{
public:
	// constrcuter destructer
	Player(TextScreen* _Screen, const char* _Text);
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _Other) noexcept = delete;

	// 굉장히 단순한 함수는 굳이 cpp에 구현하지 않아도 괜찮습니다.
	ConsoleVector GetPos()
	{
		return Pos_;
	}

	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;
	}

	void Render();
	void Update();

protected:

private:
	// Has a 개념이라고 합니다.
	// 플레이어는 어차피 너무나도 많이 
	// 만약 이 개념이 각자의 것을 가져야 한다면
	// 값이나 동적할당된 자신만의 메모리를 가져야 한다.
	TextScreen* Screen_;

	ConsoleVector Pos_;
	// 내가 별이다.
	char Text_[3];
};

