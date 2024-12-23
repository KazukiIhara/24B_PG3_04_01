#pragma once

#include "IScene.h"

class StageScene :public IScene {
public:
	StageScene(InputManager* inputManager);
	void Initialize()override;
	void Update()override;
	void Draw()override;
private:

};

