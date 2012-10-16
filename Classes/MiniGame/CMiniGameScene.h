//
//  CMiniGameScene
//  magicpet
//
//  Created by jia huyan on 11-11-28.
//  Copyright (c) 2011�� ���滥�����������Ƽ��������ι�˾. All rights reserved.
//
#pragma once
#include "GameConstant.h"
#include "../GameScene/CGameScene.h"

enum
{
	MINI_GAME_NONE,
	MINI_GAME_1_ACCESSFOOD,
	MINI_GAME_2,
	MINI_GAME_3,
	MINI_GAME_4,
};


class CMiniGameScene : public CGameScene
{
public:
	CMiniGameScene();
	~CMiniGameScene();
    
	static void Show( int MiniGameID );
	virtual void onEnter();
	virtual void onExit();
	CCLayer* CreatMiniGame( int MiniGameID );
    
    void menuCallback(CCObject * pSender);

};
