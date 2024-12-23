#include "Enemy.h"

#include <Novice.h>

void Enemy::Initialize() {
	position_ = kDefaultPosition_;
}

void Enemy::Update() {

}

void Enemy::Draw() {
	Novice::DrawEllipse(static_cast<int>(position_.x), static_cast<int>(position_.y), radius_, radius_, 0.0f, RED, kFillModeSolid);
}

void Enemy::SetState(const State& state) {
	state_ = state;
}

State Enemy::GetState() {
	return state_;
}

KamataEngine::Vector2 Enemy::GetPosition() {
	return position_;
}

int Enemy::GetRadius() {
	return radius_;
}
