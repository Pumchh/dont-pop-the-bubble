#ifndef BN_SPRITE_ITEMS_BULLE_H
#define BN_SPRITE_ITEMS_BULLE_H

#include "bn_sprite_item.h"

//{{BLOCK(bulle_bn_gfx)

//======================================================================
//
//	bulle_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles Metatiled by 8x8 not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2025-01-25, 15:07:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BULLE_BN_GFX_H
#define GRIT_BULLE_BN_GFX_H

#define bulle_bn_gfxTilesLen 2048
extern const bn::tile bulle_bn_gfxTiles[64];

#define bulle_bn_gfxPalLen 32
extern const bn::color bulle_bn_gfxPal[16];

#endif // GRIT_BULLE_BN_GFX_H

//}}BLOCK(bulle_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item bulle(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(bulle_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(bulle_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

