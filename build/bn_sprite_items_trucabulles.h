#ifndef BN_SPRITE_ITEMS_TRUCABULLES_H
#define BN_SPRITE_ITEMS_TRUCABULLES_H

#include "bn_sprite_item.h"

//{{BLOCK(trucabulles_bn_gfx)

//======================================================================
//
//	trucabulles_bn_gfx, 32x32@4, 
//	+ palette 16 entries, not compressed
//	+ 16 tiles Metatiled by 4x4 not compressed
//	Total size: 32 + 512 = 544
//
//	Time-stamp: 2025-01-25, 15:07:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TRUCABULLES_BN_GFX_H
#define GRIT_TRUCABULLES_BN_GFX_H

#define trucabulles_bn_gfxTilesLen 512
extern const bn::tile trucabulles_bn_gfxTiles[16];

#define trucabulles_bn_gfxPalLen 32
extern const bn::color trucabulles_bn_gfxPal[16];

#endif // GRIT_TRUCABULLES_BN_GFX_H

//}}BLOCK(trucabulles_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item trucabulles(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(trucabulles_bn_gfxTiles, 16), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(trucabulles_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

