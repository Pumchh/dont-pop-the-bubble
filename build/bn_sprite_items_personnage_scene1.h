#ifndef BN_SPRITE_ITEMS_PERSONNAGE_SCENE1_H
#define BN_SPRITE_ITEMS_PERSONNAGE_SCENE1_H

#include "bn_sprite_item.h"

//{{BLOCK(personnage_scene1_bn_gfx)

//======================================================================
//
//	personnage_scene1_bn_gfx, 32x96@4, 
//	+ palette 16 entries, not compressed
//	+ 48 tiles Metatiled by 4x4 not compressed
//	Total size: 32 + 1536 = 1568
//
//	Time-stamp: 2025-01-26, 14:39:27
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PERSONNAGE_SCENE1_BN_GFX_H
#define GRIT_PERSONNAGE_SCENE1_BN_GFX_H

#define personnage_scene1_bn_gfxTilesLen 1536
extern const bn::tile personnage_scene1_bn_gfxTiles[48];

#define personnage_scene1_bn_gfxPalLen 32
extern const bn::color personnage_scene1_bn_gfxPal[16];

#endif // GRIT_PERSONNAGE_SCENE1_BN_GFX_H

//}}BLOCK(personnage_scene1_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item personnage_scene1(sprite_shape_size(sprite_shape::SQUARE, sprite_size::BIG), 
            sprite_tiles_item(span<const tile>(personnage_scene1_bn_gfxTiles, 48), bpp_mode::BPP_4, compression_type::NONE, 3), 
            sprite_palette_item(span<const color>(personnage_scene1_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

