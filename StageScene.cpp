#include "StageScene.h"
#include <Novice.h>

#ifdef _DEBUG
#include "imgui.h"
#endif // _DEBUG

StageScene::StageScene(InputManager* inputManager) {
	inputManager_ = inputManager;
	enemy_ = std::make_unique<Enemy>();
}

void StageScene::Initialize() {
	enemy_->Initialize();
}

void StageScene::Update() {
#ifdef _DEBUG
	ImGui::Begin("StageScene");
	ImGui::End();
#endif // _DEBUG

	// 敵の更新
	enemy_->Update();

	// 敵の死亡確認
	if (enemy_->GetState() == kDead) {
		sceneNumber = kClear;
	}

}

void StageScene::Draw() {

	// 敵描画
	enemy_->Draw();
}
