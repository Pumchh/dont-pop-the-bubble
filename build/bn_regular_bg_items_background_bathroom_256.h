#ifndef BN_REGULAR_BG_ITEMS_BACKGROUND_BATHROOM_256_H
#define BN_REGULAR_BG_ITEMS_BACKGROUND_BATHROOM_256_H

#include "bn_regular_bg_item.h"

//{{BLOCK(background_bathroom_256_bn_gfx)

//======================================================================
//
//	background_bathroom_256_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 134 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 4288 + 2048 = 6368
//
//	Time-stamp: 2025-01-25, 15:07:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BACKGROUND_BATHROOM_256_BN_GFX_H
#define GRIT_BACKGROUND_BATHROOM_256_BN_GFX_H

#define background_bathroom_256_bn_gfxTilesLen 4288
extern const bn::tile background_bathroom_256_bn_gfxTiles[134];

#define background_bathroom_256_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell background_bathroom_256_bn_gfxMap[1024];

#define background_bathroom_256_bn_gfxPalLen 32
extern const bn::color background_bathroom_256_bn_gfxPal[16];

#endif // GRIT_BACKGROUND_BATHROOM_256_BN_GFX_H

//}}BLOCK(background_bathroom_256_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item background_bathroom_256(
            regular_bg_tiles_item(span<const tile>(background_bathroom_256_bn_gfxTiles, 134), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(background_bathroom_256_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(background_bathroom_256_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

