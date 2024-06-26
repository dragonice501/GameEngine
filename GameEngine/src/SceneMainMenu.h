#pragma once

#include "Scene.h"

#include "Circle.h"

class SceneMainMenu : public Scene
{
public:
	SceneMainMenu();
	virtual ~SceneMainMenu();

	void Setup();
	void Shutdown() override;

	void Input() override;
	void Update(float dt) override;
	void Render() override;

	int mMouseWheelValue = 0;
};