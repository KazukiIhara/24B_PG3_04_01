#pragma once

#include "IScene.h"

class ClearScene :public IScene {
public:
	ClearScene(InputManager* inputManager);
	void Initialize()override;
	void Update()override;
	void Draw()override;
};

