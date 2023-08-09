#include "window.hpp"
#include "rectangle.hpp"
#include "point.hpp"

namespace Glyphs
{
  class Glyph
  {
  private:
    /* data */
    Glyph* parent;
  public:
    Glyph(/* args */);
    ~Glyph();

    virtual void Draw(Window *);
    virtual void Bounds(Rect &);
    virtual bool Intersects(const Point &);
    virtual void Insert(Glyph *, int);
    virtual void Add(Glyph *);
    virtual void Remove(Glyph *);
    virtual Glyph *Child(int);
    virtual Glyph *Parent();
    virtual void SetParent(Glyph *p) { Parent = p};
  };
} // namespace Glyph

Glyph::Glyph(/* args */)
{
}

Glyph::~Glyph()
{
}
