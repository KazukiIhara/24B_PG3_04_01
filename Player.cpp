#include "Player.h"

#include <Novice.h>

Player::Player(InputManager* inputManager) {
	inputManager_ = inputManager;
}

void Player::Initialize() {
	position_ = kDefaultPosition_;
}

void Player::Update() {
	if (inputManager_->IsPushKey(DIK_D)) {
		position_.x += speed_;
	} else if (inputManager_->IsPushKey(DIK_A)) {
		position_.x -= speed_;
	}
	if (inputManager_->IsPushKey(DIK_W)) {
		position_.y -= speed_;
	} else if (inputManager_->IsPushKey(DIK_S)) {
		position_.y += speed_;
	}
}

void Player::Draw() {
	Novice::DrawEllipse(static_cast<int>(position_.x), static_cast<int>(position_.y), redius_, redius_, 0.0f, WHITE, kFillModeSolid);
}

KamataEngine::Vector2 Player::GetPosition() {
	return position_;
}
