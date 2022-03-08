#pragma once
#include "IComponent.h"
#include "Gameplay/Scene.h"

class ObsticleBehaviour:public Gameplay::IComponent
{
public:
	typedef std::shared_ptr<ObsticleBehaviour> Sptr;

	ObsticleBehaviour();
	virtual ~ObsticleBehaviour();

	virtual void Awake() override;
	virtual void Update(float deltaTime)override;
	MAKE_TYPENAME(ObsticleBehaviour);
	virtual nlohmann::json ToJson() const override;
	static ObsticleBehaviour::Sptr FromJson(const nlohmann::json& blob);
	virtual void RenderImGui() override;

	glm::vec3 GetPosition();

	glm::vec3 StartPosition;
	glm::vec3 EndPosition;

	float LerpTimer = 0;
	float LerpTimerMax = 10.0f;
	float Speed = 1.0f;
};