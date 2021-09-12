#pragma once
#include "Sprite2D.h"
class ParallelBG :
    public Sprite2D
{
protected:
    int m_numFrames;
    int m_currentFrames;
    float m_frameTime;
    float m_currentFrameTime;
public:
    ParallelBG();
    ParallelBG(std::shared_ptr<Model> model, std::shared_ptr<Shader> shader, std::shared_ptr<Texture> texture, int numFrames, float frameTime);

    void		Init() override;
    void		Draw() override;
    void		Update(GLfloat deltatime) override;
};

