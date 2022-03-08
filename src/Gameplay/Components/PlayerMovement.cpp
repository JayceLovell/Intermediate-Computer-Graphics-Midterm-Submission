#include "PlayerMovement.h"

PlayerMovement::PlayerMovement():
    IComponent()
{
}

PlayerMovement::~PlayerMovement() = default;

void PlayerMovement::Update(float deltaTime)
{
	/*glm::vec3 input = glm::vec3(0.0f);
	if (InputEngine::IsKeyDown(GLFW_KEY_W)) {
		input.z -= _moveSpeeds.x;
	}
	if (InputEngine::IsKeyDown(GLFW_KEY_S)) {
		input.z += _moveSpeeds.x;
	}
	if (InputEngine::IsKeyDown(GLFW_KEY_A)) {
		input.x -= _moveSpeeds.y;
	}
	if (InputEngine::IsKeyDown(GLFW_KEY_D)) {
		input.x += _moveSpeeds.y;
	}
	if (InputEngine::IsKeyDown(GLFW_KEY_LEFT_CONTROL)) {
		input.y -= _moveSpeeds.z;
	}
	if (InputEngine::IsKeyDown(GLFW_KEY_SPACE)) {
		input.y += _moveSpeeds.z;
	}

	if (InputEngine::IsKeyDown(GLFW_KEY_LEFT_SHIFT)) {
		input *= _shiftMultipler;
	}

	input *= deltaTime;

	glm::vec3 worldMovement = currentRot * glm::vec4(input, 1.0f);
	GetGameObject()->SetPostion(GetGameObject()->GetPosition() + worldMovement);*/
}

void PlayerMovement::RenderImGui()
{
}

nlohmann::json PlayerMovement::ToJson() const
{
    return nlohmann::json();
}

PlayerMovement::Sptr PlayerMovement::FromJson(const nlohmann::json& blob)
{
    return PlayerMovement::Sptr();
}
