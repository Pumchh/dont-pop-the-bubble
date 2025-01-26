#ifndef BN_SPRITE_ITEMS_CANARD_16_H
#define BN_SPRITE_ITEMS_CANARD_16_H

#include "bn_sprite_item.h"

//{{BLOCK(canard_16_bn_gfx)

//======================================================================
//
//	canard_16_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles Metatiled by 2x2 not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2025-01-26, 14:39:27
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CANARD_16_BN_GFX_H
#define GRIT_CANARD_16_BN_GFX_H

#define canard_16_bn_gfxTilesLen 128
extern const bn::tile canard_16_bn_gfxTiles[4];

#define canard_16_bn_gfxPalLen 32
extern const bn::color canard_16_bn_gfxPal[16];

#endif // GRIT_CANARD_16_BN_GFX_H

//}}BLOCK(canard_16_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item canard_16(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(canard_16_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(canard_16_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

