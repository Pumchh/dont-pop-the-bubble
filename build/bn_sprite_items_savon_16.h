#ifndef BN_SPRITE_ITEMS_SAVON_16_H
#define BN_SPRITE_ITEMS_SAVON_16_H

#include "bn_sprite_item.h"

//{{BLOCK(savon_16_bn_gfx)

//======================================================================
//
//	savon_16_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles Metatiled by 2x2 not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2025-01-25, 15:07:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SAVON_16_BN_GFX_H
#define GRIT_SAVON_16_BN_GFX_H

#define savon_16_bn_gfxTilesLen 128
extern const bn::tile savon_16_bn_gfxTiles[4];

#define savon_16_bn_gfxPalLen 32
extern const bn::color savon_16_bn_gfxPal[16];

#endif // GRIT_SAVON_16_BN_GFX_H

//}}BLOCK(savon_16_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item savon_16(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(savon_16_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(savon_16_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

