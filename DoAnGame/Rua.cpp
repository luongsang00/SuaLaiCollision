#include "Rua.h"

void Rua::GetBoundingBox(float& left, float& top, float& right, float& bottom)
{
	left = x;
	top = y;
	right = x + RUA_BBOX_WIDTH;

	if (state == RUA_STATE_DIE)
		bottom = y + RUA_BBOX_HEIGHT_DIE;
	else
		bottom = y + RUA_BBOX_HEIGHT;
}

void Rua::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	CGameObject::Update(dt, coObjects);

	//
	// TO-DO: make sure Goomba can interact with the world and to each of them too!
	// 

	x += dx;
	y += dy;

	if (vx < 0 && x < 0) {
		x = 0; vx = -vx;
	}

	if (vx > 0 && x > 290) {
		x = 290; vx = -vx;
	}
}

void Rua::Render()
{
	int ani = RUA_ANI_WALKING;
	if (state == RUA_STATE_DIE) {
		ani = RUA_ANI_DIE;
	}

	animations[ani]->Render(x, y);
	//RenderBoundingBox();
}

void Rua::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
	case RUA_STATE_DIE:
		y += RUA_BBOX_HEIGHT - RUA_BBOX_HEIGHT_DIE + 1;
		vx = 0;
		vy = 0;
		break;
	case RUA_STATE_WALKING:
		vx = -GOOMBA_WALKING_SPEED;
	}
}
