#pragma once

#include "IScene.h"

class ClearScene :public IScene {
public:
	ClearScene(InputManager* inputManager);
	void Initialize()override;
	void Update()override;
	void Draw()override;
private:
	int pushSpaceTexHandle_ = 0;
	int gameClearTexHandle_ = 0;
};

