
@{{BLOCK(savon_16_bn_gfx)

@=======================================================================
@
@	savon_16_bn_gfx, 16x16@4, 
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
	.global savon_16_bn_gfxTiles		@ 128 unsigned chars
	.hidden savon_16_bn_gfxTiles
savon_16_bn_gfxTiles:
	.word 0x66000000,0x66660000,0x50000000,0x50000000,0x66666600,0x66666660,0x66666666,0x44444444
	.word 0x00000066,0x00000066,0x00000005,0x00000005,0x00666666,0x06666666,0x66666666,0x44444444
	.word 0x45666555,0x45646445,0x45666555,0x45646544,0x54646555,0x66666666,0x66666660,0x66666600
	.word 0x54556665,0x54556465,0x55456465,0x55456465,0x54456664,0x66666666,0x06666666,0x00666666

	.section .rodata
	.align	2
	.global savon_16_bn_gfxPal		@ 32 unsigned chars
	.hidden savon_16_bn_gfxPal
savon_16_bn_gfxPal:
	.hword 0x03E6,0x1A56,0x15D1,0x7B3F,0x7FFF,0x7B2D,0x7AA0,0x76B8
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(savon_16_bn_gfx)
