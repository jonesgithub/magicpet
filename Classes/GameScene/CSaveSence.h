//
//  CGameMenu.h
//  magicpet
//
//  Created by jia huyan on 11-11-28.
//  Copyright (c) 2011�� ���滥�����������Ƽ��������ι�˾. All rights reserved.
//
#pragma once
#include "GameConstant.h"
#include "CGameScene.h"

enum
{
	CSAVESENCE_BUTTON_SAVE1,
	CSAVESENCE_BUTTON_SAVE2,
	CSAVESENCE_BUTTON_SAVE3,
	CSAVESENCE_BUTTON_BACK,
};

class CSaveSence : public CGameScene
{
    
public:
	CSaveSence();
	~CSaveSence();
    
	static void Show( bool isDelete = false );
	virtual void onEnter();
	virtual void onExit();
    
    void menuCallback(CCObject * pSender);

	bool m_bIsSave[3];
    bool m_bIsDelete;
    
    void setIsDeleteSave( bool isDelete ){ m_bIsDelete = isDelete; }
    
};

