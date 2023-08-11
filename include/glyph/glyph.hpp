#pragma once

#include "window.hpp"
#include "rectangle.hpp"
#include "point.hpp"
#include "compositor.hpp"

namespace Glyphs
{
  class Glyph
  {
  private:
    /* data */
    Glyph *parent;

  public:
    ~Glyph();

    virtual void Draw(Window *);
    virtual void Bounds(Rect &);
    virtual bool Intersects(const Point &);

    virtual void Insert(Glyph *, int);
    virtual void Add(Glyph *);
    virtual void Remove(Glyph *);

    virtual Glyph *Child(int);
    virtual Glyph *Parent();

  protected:
    Glyph(Compositor *);
  };
} // namespace Glyph

Glyph::Glyph(/* args */)
{
}

Glyph::~Glyph()
{
}
