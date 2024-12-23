#pragma once

#include "IScene.h"

class TitleScene :public IScene {
public:
	TitleScene(InputManager* inputManager);
	void Initialize()override;
	void Update()override;
	void Draw()override;
private:
	
};

