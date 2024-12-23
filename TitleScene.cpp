#include "TitleScene.h"
#include <Novice.h>

#ifdef _DEBUG
#include "imgui.h"
#endif // _DEBUG

TitleScene::TitleScene(InputManager* inputManager) {
	inputManager_ = inputManager;
}

void TitleScene::Initialize() {
	pushSpaceTextureHandle_ = Novice::LoadTexture("./Resources/PushSpace.png");
}

void TitleScene::Update() {
#ifdef _DEBUG
	ImGui::Begin("TitleScene");
	ImGui::End();
#endif // _DEBUG

	// テスト用
	if (inputManager_->IsPushKey(DIK_SPACE)) {
		sceneNumber = kStage;
	}
}

void TitleScene::Draw() {
	Novice::DrawSprite(120, 500, pushSpaceTextureHandle_, 1.0f, 1.0f, 0.0f, WHITE);
}
