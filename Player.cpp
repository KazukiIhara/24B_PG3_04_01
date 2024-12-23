#include "Player.h"

#include <Novice.h>

Player::Player(InputManager* inputManager) {
	inputManager_ = inputManager;
}

void Player::Initialize() {
	position_ = kDefaultPosition_;
}

void Player::Update() {

}

void Player::Draw() {
	Novice::DrawEllipse(static_cast<int>(position_.x), static_cast<int>(position_.y), redius_, redius_, 0.0f, RED, kFillModeSolid);
}
