
@{{BLOCK(canard_bn_gfx)

@=======================================================================
@
@	canard_bn_gfx, 32x32@4, 
@	+ palette 16 entries, not compressed
@	+ 16 tiles Metatiled by 4x4 not compressed
@	Total size: 32 + 512 = 544
@
@	Time-stamp: 2025-01-26, 14:39:27
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global canard_bn_gfxTiles		@ 512 unsigned chars
	.hidden canard_bn_gfxTiles
canard_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x11111100,0x11111110,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111110
	.word 0x00000000,0x00000001,0x00000011,0x00000013,0x00000013,0x00002211,0x00000011,0x00000001

	.word 0x10000000,0x11000000,0x11100000,0x11100000,0x11100000,0x11100000,0x11100000,0x11100000
	.word 0x00000000,0x00000001,0x00000011,0x00000111,0x00001111,0x11111111,0x11111111,0x11411111
	.word 0x11111100,0x01111000,0x11111100,0x11111110,0x11411111,0x11411111,0x11141111,0x11114111
	.word 0x00000000,0x00000000,0x00000000,0x00000001,0x00000011,0x00000011,0x00000011,0x00000011
	.word 0x11000000,0x10000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x44111111,0x11111111,0x11111111,0x11111110,0x11111100,0x00000000,0x00000000,0x00000000
	.word 0x11111444,0x11111111,0x11111111,0x01111111,0x00111111,0x00000000,0x00000000,0x00000000
	.word 0x00000011,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global canard_bn_gfxPal		@ 32 unsigned chars
	.hidden canard_bn_gfxPal
canard_bn_gfxPal:
	.hword 0x03E6,0x03FF,0x02BF,0x7C80,0x035F,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(canard_bn_gfx)
