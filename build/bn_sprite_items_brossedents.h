#ifndef BN_SPRITE_ITEMS_BROSSEDENTS_H
#define BN_SPRITE_ITEMS_BROSSEDENTS_H

#include "bn_sprite_item.h"

//{{BLOCK(brossedents_bn_gfx)

//======================================================================
//
//	brossedents_bn_gfx, 32x32@4, 
//	+ palette 16 entries, not compressed
//	+ 16 tiles Metatiled by 4x4 not compressed
//	Total size: 32 + 512 = 544
//
//	Time-stamp: 2025-01-26, 14:39:27
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BROSSEDENTS_BN_GFX_H
#define GRIT_BROSSEDENTS_BN_GFX_H

#define brossedents_bn_gfxTilesLen 512
extern const bn::tile brossedents_bn_gfxTiles[16];

#define brossedents_bn_gfxPalLen 32
extern const bn::color brossedents_bn_gfxPal[16];

#endif // GRIT_BROSSEDENTS_BN_GFX_H

//}}BLOCK(brossedents_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item brossedents(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(brossedents_bn_gfxTiles, 16), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(brossedents_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

