#pragma once

#include <memory>
#include <vector>

#include "IScene.h"

#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

class StageScene :public IScene {
public:
	StageScene(InputManager* inputManager);
	void Initialize()override;
	void Update()override;
	void Draw()override;
private:
	// 敵
	std::unique_ptr<Enemy> enemy_;
	// プレイヤー
	std::unique_ptr<Player> player_;
	// 弾
	std::unique_ptr<Bullet> bullet_;
};

