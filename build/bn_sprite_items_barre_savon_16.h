#ifndef BN_SPRITE_ITEMS_BARRE_SAVON_16_H
#define BN_SPRITE_ITEMS_BARRE_SAVON_16_H

#include "bn_sprite_item.h"

//{{BLOCK(barre_savon_16_bn_gfx)

//======================================================================
//
//	barre_savon_16_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles Metatiled by 2x2 not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2025-01-25, 15:07:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BARRE_SAVON_16_BN_GFX_H
#define GRIT_BARRE_SAVON_16_BN_GFX_H

#define barre_savon_16_bn_gfxTilesLen 128
extern const bn::tile barre_savon_16_bn_gfxTiles[4];

#define barre_savon_16_bn_gfxPalLen 32
extern const bn::color barre_savon_16_bn_gfxPal[16];

#endif // GRIT_BARRE_SAVON_16_BN_GFX_H

//}}BLOCK(barre_savon_16_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item barre_savon_16(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(barre_savon_16_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(barre_savon_16_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

