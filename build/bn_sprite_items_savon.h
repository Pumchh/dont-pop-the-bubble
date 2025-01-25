#ifndef BN_SPRITE_ITEMS_SAVON_H
#define BN_SPRITE_ITEMS_SAVON_H

#include "bn_sprite_item.h"

//{{BLOCK(savon_bn_gfx)

//======================================================================
//
//	savon_bn_gfx, 32x32@4, 
//	+ palette 16 entries, not compressed
//	+ 16 tiles Metatiled by 4x4 not compressed
//	Total size: 32 + 512 = 544
//
//	Time-stamp: 2025-01-25, 15:07:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SAVON_BN_GFX_H
#define GRIT_SAVON_BN_GFX_H

#define savon_bn_gfxTilesLen 512
extern const bn::tile savon_bn_gfxTiles[16];

#define savon_bn_gfxPalLen 32
extern const bn::color savon_bn_gfxPal[16];

#endif // GRIT_SAVON_BN_GFX_H

//}}BLOCK(savon_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item savon(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(savon_bn_gfxTiles, 16), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(savon_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

