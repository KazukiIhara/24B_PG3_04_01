#pragma once

#include <memory>
#include <vector>
#include "math/Vector2.h"

#include "InputManager.h"

class Player {
public:
	Player(InputManager* inputManager);
	~Player() = default;

	void Initialize();
	void Update();
	void Draw();

	KamataEngine::Vector2 GetPosition();

private:
	InputManager* inputManager_ = nullptr;
	const KamataEngine::Vector2 kDefaultPosition_ = { 1280 / 2, 720 / 2 + 200 };
	KamataEngine::Vector2 position_ = { 0,0 };
	int speed_ = 4;
	int redius_ = 24;
};