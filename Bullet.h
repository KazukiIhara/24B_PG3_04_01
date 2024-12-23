#pragma once

#include "math/Vector2.h"

class Bullet {
public:
	Bullet() = default;
	~Bullet() = default;

	void Initialize();
	void Shot(KamataEngine::Vector2 position);
	void Update();
	void Draw();

	void SetIsActive(bool isActive);
	bool GetIsActive();
	int GetRadius();

	KamataEngine::Vector2 GetPosition();

private:
	KamataEngine::Vector2 position_ = { 0,0 };
	int size_ = 12;
	int speed = 6;
	bool isActive_ = false;

};