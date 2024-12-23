#include "StageScene.h"
#include <Novice.h>
#include <cmath>

#ifdef _DEBUG
#include "imgui.h"
#endif // _DEBUG

StageScene::StageScene(InputManager* inputManager) {
	inputManager_ = inputManager;
	player_ = std::make_unique<Player>(inputManager);
	enemy_ = std::make_unique<Enemy>();
	bullet_ = std::make_unique<Bullet>();
}

void StageScene::Initialize() {
	player_->Initialize();
	enemy_->Initialize();
	bullet_->Initialize();
}

void StageScene::Update() {
#ifdef _DEBUG
	ImGui::Begin("StageScene");
	ImGui::End();
#endif // _DEBUG

	// 敵の更新
	enemy_->Update();

	// プレイヤーの更新
	player_->Update();

	// 弾の更新
	bullet_->Update();

	// 弾の発射
	if (inputManager_->IsTriggerkey(DIK_SPACE)) {
		bullet_->Shot(player_->GetPosition());
	}

	// 当たり判定
	if (bullet_->GetIsActive()) {
		float distance = std::sqrtf(
			std::powf(enemy_->GetPosition().x - bullet_->GetPosition().x, 2) +
			std::powf(enemy_->GetPosition().y - bullet_->GetPosition().y, 2));
		if (distance < enemy_->GetRadius() + bullet_->GetRadius()) {
			enemy_->SetState(kDead);
		}
	}

	// 敵の死亡確認
	if (enemy_->GetState() == kDead) {
		sceneNumber = kClear;
	}

}

void StageScene::Draw() {
	// 弾の描画
	bullet_->Draw();
	// 敵描画
	enemy_->Draw();
	// プレイヤーの描画
	player_->Draw();
}
