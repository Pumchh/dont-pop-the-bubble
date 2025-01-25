
@{{BLOCK(brossedents_16_bn_gfx)

@=======================================================================
@
@	brossedents_16_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles Metatiled by 2x2 not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2025-01-25, 15:07:26
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global brossedents_16_bn_gfxTiles		@ 128 unsigned chars
	.hidden brossedents_16_bn_gfxTiles
brossedents_16_bn_gfxTiles:
	.word 0x33200000,0x44200000,0x33200000,0x44200000,0x33200000,0x22200000,0x02000000,0x02000000
	.word 0x00000004,0x00000043,0x00000044,0x00000043,0x00000004,0x00000000,0x00000000,0x00000000
	.word 0x02000000,0x24200000,0x24200000,0x24200000,0x24200000,0x24200000,0x24200000,0x02000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global brossedents_16_bn_gfxPal		@ 32 unsigned chars
	.hidden brossedents_16_bn_gfxPal
brossedents_16_bn_gfxPal:
	.hword 0x03E4,0x03FF,0x7C80,0x7FFF,0x7AA0,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(brossedents_16_bn_gfx)
