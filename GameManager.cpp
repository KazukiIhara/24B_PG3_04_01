#include "GameManager.h"

#include <Novice.h>

GameManager::GameManager(const char* kWindowTitle) {
	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// インプットマネージャのインスタンスを生成
	inputManager_ = std::make_unique<InputManager>();
	// 各シーンの配列
	sceneArr_[kTitle] = std::make_unique<TitleScene>(inputManager_.get());
	sceneArr_[kStage] = std::make_unique<StageScene>(inputManager_.get());
	sceneArr_[kClear] = std::make_unique<ClearScene>(inputManager_.get());

	// 初期シーンの設定
	currentSceneNumber_ = kTitle;
	sceneArr_[kTitle]->Initialize();
}

int GameManager::Run() {

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		inputManager_->Update();

		// シーンのチェック
		prevSceneNumber_ = currentSceneNumber_;
		currentSceneNumber_ = sceneArr_[currentSceneNumber_]->GetSceneNumber();

		// シーン変更チェック
		if (prevSceneNumber_ != currentSceneNumber_) {
			sceneArr_[currentSceneNumber_]->Initialize();
		}

		///
		/// ↓更新処理ここから
		///

		// 各シーンの更新処理
		sceneArr_[currentSceneNumber_]->Update();

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		// 各シーンの描画処理
		sceneArr_[currentSceneNumber_]->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (inputManager_->IsTriggerkey(DIK_ESCAPE)) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;

}
