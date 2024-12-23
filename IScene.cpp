#include "IScene.h"

int IScene::sceneNumber = kTitle;

IScene::~IScene() {}

int IScene::GetSceneNumber() {
	return sceneNumber;
}
