#include "ClearScene.h"
#include <Novice.h>

#ifdef _DEBUG
#include "imgui.h"
#endif // _DEBUG

ClearScene::ClearScene(InputManager* inputManager) {
	inputManager_ = inputManager;
	pushSpaceTexHandle_ = Novice::LoadTexture("./Resources/PushSpace.png");
	gameClearTexHandle_ = Novice::LoadTexture("./Resources/GameClear.png");
}

void ClearScene::Initialize() {

}

void ClearScene::Update() {
#ifdef _DEBUG
	ImGui::Begin("ClearScene");
	ImGui::End();
#endif // _DEBUG
	if (inputManager_->IsTriggerkey(DIK_SPACE)) {
		sceneNumber = kTitle;
	}

}

void ClearScene::Draw() {
	Novice::DrawSprite(120, 500, pushSpaceTexHandle_, 1.0f, 1.0f, 0.0f, WHITE);
	Novice::DrawSprite(120, 300, gameClearTexHandle_, 1.0f, 1.0f, 0.0f, WHITE);
}
