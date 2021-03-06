#pragma once


class PlayScene : public Layer
{
public :

	static cocos2d::Scene* createScene();

	virtual bool init() override;

	void MenuCloseCallback(Ref*);
	void IfPlayerDead(Ref*);
	void IfStageClear(Ref*);

	CREATE_FUNC(PlayScene);
	
};