#pragma once

#include "math/Vector2.h"

enum State {
	kAllive,
	kDead,
};

class Enemy {
public:
	Enemy() = default;
	~Enemy() = default;

	void Initialize();
	void Update();
	void Draw();

	void SetState(const State& state);

	State GetState();
	KamataEngine::Vector2 GetPosition();
	int GetRadius();



private:
	const KamataEngine::Vector2 kDefaultPosition_ = { 1280 / 2, 720 / 2 - 200 };
	State state_ = kAllive;
	KamataEngine::Vector2 position_ = { 0,0 };
	int radius_ = 24;
};