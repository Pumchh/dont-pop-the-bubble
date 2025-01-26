
@{{BLOCK(canard_16_bn_gfx)

@=======================================================================
@
@	canard_16_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles Metatiled by 2x2 not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2025-01-26, 14:39:27
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global canard_16_bn_gfxTiles		@ 128 unsigned chars
	.hidden canard_16_bn_gfxTiles
canard_16_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00001110,0x00013111,0x00211111,0x00011111
	.word 0x00001000,0x00011100,0x11111100,0x11111100,0x11411000,0x44110000,0x11100000,0x00000000
	.word 0x00001110,0x00001110,0x00011411,0x00011411,0x00011141,0x00001114,0x00000111,0x00000000

	.section .rodata
	.align	2
	.global canard_16_bn_gfxPal		@ 32 unsigned chars
	.hidden canard_16_bn_gfxPal
canard_16_bn_gfxPal:
	.hword 0x03E6,0x03FF,0x02BF,0x7C80,0x035F,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(canard_16_bn_gfx)
