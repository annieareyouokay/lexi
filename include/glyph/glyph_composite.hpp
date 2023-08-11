#pragma once

#include "glyph.hpp"
#include "list"

namespace Glyphs
{
    class GlyphComposite : public Glyph
    {
    private:
        std::list<Glyph*> _glyphs;
    public:
        virtual ~GlyphComposite();
    protected:
        GlyphComposite(/* args */);
    };
} // namespace Glyphs

GlyphComposite::GlyphComposite(/* args */)
{
}

GlyphComposite::~GlyphComposite()
{
}
