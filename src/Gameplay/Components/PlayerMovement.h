#pragma once
#include "IComponent.h"

class PlayerMovement :public Gameplay::IComponent
{
public:
	typedef std::shared_ptr<PlayerMovement> Sptr;

	PlayerMovement();
	virtual ~PlayerMovement();

	virtual void Update(float deltaTime) override;

	virtual void RenderImGui() override;
	MAKE_TYPENAME(PlayerMovement);
	virtual nlohmann::json ToJson() const override;
	static PlayerMovement::Sptr FromJson(const nlohmann::json& blob);

protected:

};

