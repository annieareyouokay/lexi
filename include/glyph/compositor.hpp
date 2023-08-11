#pragma once

class Compositor
{
private:
    /* data */
public:
    virtual ~Compositor();
    virtual void Compose();
    virtual void SetComposition();
protected:
    Compositor(/* args */);
};

Compositor::Compositor(/* args */)
{
}

Compositor::~Compositor()
{
}
