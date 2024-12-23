#include "ClearScene.h"
#include <Novice.h>

#ifdef _DEBUG
#include "imgui.h"
#endif // _DEBUG

ClearScene::ClearScene(InputManager* inputManager) {
	inputManager_ = inputManager;
}

void ClearScene::Initialize() {

}

void ClearScene::Update() {
#ifdef _DEBUG
	ImGui::Begin("ClearScene");
	ImGui::End();
#endif // _DEBUG

}

void ClearScene::Draw() {

}
