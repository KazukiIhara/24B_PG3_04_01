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

	// �V�[���ԍ��̃Q�b�^�[
	int GetSceneNumber();

protected:
	// �V�[���ԍ����Ǘ�����ϐ�
	static int sceneNumber;

};