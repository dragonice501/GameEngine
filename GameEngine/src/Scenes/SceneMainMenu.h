#pragma once

#include "Scene.h"

#include "../Objects/Particle.h"
#include "../Utils/Vec2.h"

class SceneMainMenu : public Scene
{
public:
	SceneMainMenu();
	virtual ~SceneMainMenu();

	void Setup(static SDL_Renderer* renderer);
	void Shutdown() override;

	void Input() override;
	void Update(float dt) override;
	void Render(static SDL_Renderer* renderer, SDL_Rect& camera) override;

	Vec2 p0;
	Vec2 p1;
	Vec2 p2;
	Vec2 p3;
};