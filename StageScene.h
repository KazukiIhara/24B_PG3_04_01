#pragma once

#include <memory>

#include "IScene.h"

#include "Player.h"
#include "Enemy.h"

class StageScene :public IScene {
public:
	StageScene(InputManager* inputManager);
	void Initialize()override;
	void Update()override;
	void Draw()override;
private:
	// プレイヤー
	std::unique_ptr<Player> player_;
	// 敵
	std::unique_ptr<Enemy> enemy_;
};

