#pragma once
#include "GameObject.h"

#define NEN_BBOX_WIDTH  16
#define NEN_BBOX_HEIGHT 16

class Nen : public CGameObject
{
public:
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
};