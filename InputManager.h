#pragma once

#include <Novice.h>

class InputManager {
public:
	void Update();

	bool IsTriggerkey(BYTE key);
	bool IsPushKey(BYTE key);

private:
	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};

