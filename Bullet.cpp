#include "Bullet.h"

#include <Novice.h>

void Bullet::Initialize() {
	position_ = { 0,0 };
	isActive_ = false;
}

void Bullet::Shot(KamataEngine::Vector2 position) {
	if (!isActive_) {
		position_ = position;
		isActive_ = true;
	}
}

void Bullet::Update() {
	if (isActive_) {
		position_.y -= speed;
	}
	if (position_.x < 0 || position_.x > 1280 || position_.y < 0 || position_.y > 720) {
		isActive_ = false;
	}
}

void Bullet::Draw() {
	if (isActive_) {
		Novice::DrawTriangle(
			static_cast<int>(position_.x - size_), static_cast<int>(position_.y + size_),
			static_cast<int>(position_.x), static_cast<int>(position_.y - size_),
			static_cast<int>(position_.x + size_), static_cast<int>(position_.y + size_),
			GREEN, kFillModeSolid
		);
	}
}

void Bullet::SetIsActive(bool isActive) {
	isActive_ = isActive;
}

KamataEngine::Vector2 Bullet::GetPosition() {
	return position_;
}
