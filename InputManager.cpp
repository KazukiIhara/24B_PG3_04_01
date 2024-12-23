#include "InputManager.h"

#include <Novice.h>

void InputManager::Update() {
	// キー入力を受け取る
	memcpy(preKeys, keys, 256);
	Novice::GetHitKeyStateAll(keys);
}

bool InputManager::IsTriggerkey(BYTE key) {
	return !preKeys[key] && keys[key];
}

bool InputManager::IsPushKey(BYTE key) {
	return keys[key] != 0;
}
