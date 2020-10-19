#include "Nen.h"

void Nen::Render()
{
	animations[0]->Render(x, y);
	//RenderBoundingBox();
}

void Nen::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x;
	t = y;
	r = x + NEN_BBOX_WIDTH;
	b = y + NEN_BBOX_HEIGHT;
}