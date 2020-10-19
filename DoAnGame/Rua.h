#pragma once
#include "GameObject.h"

#define GOOMBA_WALKING_SPEED 0.05f;

#define RUA_BBOX_WIDTH 16
#define RUA_BBOX_HEIGHT 26
#define RUA_BBOX_HEIGHT_DIE 9

#define RUA_STATE_WALKING 100
#define RUA_STATE_DIE 200

#define RUA_ANI_WALKING 0
#define RUA_ANI_DIE 1

class Rua : public CGameObject
{
	virtual void GetBoundingBox(float& left, float& top, float& right, float& bottom);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
	virtual void Render();


public:
	virtual void SetState(int state);
};