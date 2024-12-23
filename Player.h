#pragma once

#include "InputManager.h"
#include "math/Vector2.h"

class Player {
public:
	Player(InputManager* inputManager);
	~Player() = default;

	void Initialize();
	void Update();
	void Draw();

private:
	InputManager* inputManager_ = nullptr;
	const KamataEngine::Vector2 kDefaultPosition_ = { 1280 / 2, 720 / 2 };
	KamataEngine::Vector2 position_ = { 0,0 };
	int redius_ = 24;
};