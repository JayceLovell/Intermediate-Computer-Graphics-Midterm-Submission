#include "ObsticleBehaviour.h"

template<typename T>
T LERP(const T& p0, const T& p1, float t)
{
    return (1.0f - t) * p0 + t * p1;
}

ObsticleBehaviour::~ObsticleBehaviour() = default;
void ObsticleBehaviour::Awake()
{
    StartPosition = GetGameObject()->GetPosition();
}
void ObsticleBehaviour::Update(float deltaTime)
{
    LerpTimer += deltaTime * Speed;
    if (LerpTimer >= LerpTimerMax) {
        LerpTimer = 0;
    }
    float t;
    t = LerpTimer / LerpTimerMax;
    GetGameObject()->SetPostion(LERP(StartPosition, EndPosition, t));
    GetGameObject()->LookAt(EndPosition);
}
nlohmann::json ObsticleBehaviour::ToJson() const
{
    return nlohmann::json();
}
ObsticleBehaviour::Sptr ObsticleBehaviour::FromJson(const nlohmann::json& blob)
{
    return ObsticleBehaviour::Sptr();
}
void ObsticleBehaviour::RenderImGui()
{
}
glm::vec3 ObsticleBehaviour::GetPosition()
{
    float x = (float)(rand() % 100 + (-50));
    float y = (float)(rand() % 100 + (-50));
    float z = (float)(rand() % 100 + (-50));
    return glm::vec3(x, y, z);
}
ObsticleBehaviour::ObsticleBehaviour():
    IComponent()
{}