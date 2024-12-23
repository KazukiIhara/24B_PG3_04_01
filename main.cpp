#include <Windows.h>
#include "GameManager.h"

const char kWindowTitle[] = "LE2A_01_イハラ_カズキ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	std::unique_ptr<GameManager> gamemanager;
	gamemanager = std::make_unique<GameManager>();

	gamemanager->Run(kWindowTitle);

}
