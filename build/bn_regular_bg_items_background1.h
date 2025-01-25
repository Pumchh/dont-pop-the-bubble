#ifndef BN_REGULAR_BG_ITEMS_BACKGROUND1_H
#define BN_REGULAR_BG_ITEMS_BACKGROUND1_H

#include "bn_regular_bg_item.h"

//{{BLOCK(background1_bn_gfx)

//======================================================================
//
//	background1_bn_gfx, 512x512@4, 
//	+ palette 16 entries, not compressed
//	+ 176 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x64 
//	Total size: 32 + 5632 + 8192 = 13856
//
//	Time-stamp: 2025-01-25, 15:07:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BACKGROUND1_BN_GFX_H
#define GRIT_BACKGROUND1_BN_GFX_H

#define background1_bn_gfxTilesLen 5632
extern const bn::tile background1_bn_gfxTiles[176];

#define background1_bn_gfxMapLen 8192
extern const bn::regular_bg_map_cell background1_bn_gfxMap[4096];

#define background1_bn_gfxPalLen 32
extern const bn::color background1_bn_gfxPal[16];

#endif // GRIT_BACKGROUND1_BN_GFX_H

//}}BLOCK(background1_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item background1(
            regular_bg_tiles_item(span<const tile>(background1_bn_gfxTiles, 176), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(background1_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(background1_bn_gfxMap[0], size(64, 64), compression_type::NONE, 1, false));
}

#endif

