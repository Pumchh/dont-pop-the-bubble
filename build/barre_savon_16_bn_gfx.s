
@{{BLOCK(barre_savon_16_bn_gfx)

@=======================================================================
@
@	barre_savon_16_bn_gfx, 16x16@4, 
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
	.global barre_savon_16_bn_gfxTiles		@ 128 unsigned chars
	.hidden barre_savon_16_bn_gfxTiles
barre_savon_16_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x11111100,0x33322210,0x31311210
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00111111,0x01333222,0x01313212
	.word 0x31322210,0x31321110,0x33322210,0x11111110,0x11111120,0x22222200,0x00000000,0x00000000
	.word 0x01333222,0x01113212,0x01113212,0x01111111,0x02111111,0x00222222,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global barre_savon_16_bn_gfxPal		@ 32 unsigned chars
	.hidden barre_savon_16_bn_gfxPal
barre_savon_16_bn_gfxPal:
	.hword 0x03E4,0x03FF,0x037F,0x02BF,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(barre_savon_16_bn_gfx)
