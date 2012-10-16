/*****************************************************************************/
//File name:	filecpp
//Author: 		huyan
//Description:	������ɵ������桢
/******************************************************************************/
#pragma once

#include "cocos2d.h"
using namespace cocos2d;

#include "../loader/CClientLoader.h"
#include "../CCXMLLayer.h"

class CTaskFinishGui : public CCXMLLayer
{

public:
	CTaskFinishGui( int eventId );
	~CTaskFinishGui();

	void onEnter();
	void onExit();

	void FadeOut();

	int m_iEventId;
};