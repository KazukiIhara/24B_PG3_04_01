#include "StageScene.h"
#include <Novice.h>

#ifdef _DEBUG
#include "imgui.h"
#endif // _DEBUG

StageScene::StageScene(InputManager* inputManager) {
	inputManager_ = inputManager;
	player_ = std::make_unique<Player>(inputManager);
	enemy_ = std::make_unique<Enemy>();
}

void StageScene::Initialize() {
	player_->Initialize();
	enemy_->Initialize();
}

void StageScene::Update() {
#ifdef _DEBUG
	ImGui::Begin("StageScene");
	ImGui::End();
#endif // _DEBUG

	// プレイヤーの更新
	player_->Update();

	// 敵の更新
	enemy_->Update();

	// 敵の死亡確認
	if (enemy_->GetState() == kDead) {
		sceneNumber = kClear;
	}

	// テスト用
	if (inputManager_->IsTriggerkey(DIK_SPACE)) {
		sceneNumber = kClear;
	}

}

void StageScene::Draw() {
	// プレイヤーの描画
	player_->Draw();
	// 敵描画
	enemy_->Draw();
}
