#pragma once

#include <memory>
#include "InputManager.h"
#include "StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

class GameManager {
public:
	GameManager(const char* kWindowTitle);
	~GameManager() = default;

	// 実行
	int Run();

private:
	// インプットマネージャのインスタンス
	std::unique_ptr<InputManager> inputManager_;
	// シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];
	// 現在のシーン番号
	int currentSceneNumber_ = 0;
	// 一つ前のシーン番号
	int prevSceneNumber_ = 0;
};

