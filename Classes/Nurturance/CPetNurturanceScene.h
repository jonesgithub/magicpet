//
//  CMiniGameScene
//  magicpet
//
//  Created by jia huyan on 11-11-28.
//  Copyright (c) 2011�� ���滥�����������Ƽ��������ι�˾. All rights reserved.
//
#pragma once
#include "GameConstant.h"

class CPetNurturanceScene : public CCScene
{
public:
	CPetNurturanceScene();
	~CPetNurturanceScene();
    
	static void Show();
	virtual void onEnter();
	virtual void onExit();
    
    void menuCallback(CCObject * pSender);

};
