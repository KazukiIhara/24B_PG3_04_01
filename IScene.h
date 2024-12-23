#pragma once

enum SCENE {
	kTitle,
	kStage,
	kClear,
};

class IScene {
public:
	virtual ~IScene();

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	// シーン番号のゲッター
	int GetSceneNumber();

protected:
	// シーン番号を管理する変数
	static int sceneNumber;

};