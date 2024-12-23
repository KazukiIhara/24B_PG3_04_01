#include "StageScene.h"
#include <Novice.h>

#ifdef _DEBUG
#include "imgui.h"
#endif // _DEBUG

StageScene::StageScene(InputManager* inputManager) {
	inputManager_ = inputManager;
}

void StageScene::Initialize() {
}

void StageScene::Update() {
#ifdef _DEBUG
	ImGui::Begin("StageScene");
	ImGui::End();
#endif // _DEBUG

}

void StageScene::Draw() {
}
