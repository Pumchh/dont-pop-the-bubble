
@{{BLOCK(trucabulles_16_bn_gfx)

@=======================================================================
@
@	trucabulles_16_bn_gfx, 16x16@4, 
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
	.global trucabulles_16_bn_gfxTiles		@ 128 unsigned chars
	.hidden trucabulles_16_bn_gfxTiles
trucabulles_16_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x55000000,0x55300000,0x45500000,0x45500000,0x45500000,0x55300000
	.word 0x00000000,0x00000000,0x00000055,0x00000355,0x00000554,0x00000554,0x00000554,0x00000355
	.word 0x35000000,0x40000000,0x40000000,0x40000000,0x40000000,0x40000000,0x25000000,0x54000000
	.word 0x00000053,0x00000004,0x00000004,0x00000004,0x00000004,0x00000004,0x00000052,0x00000045

	.section .rodata
	.align	2
	.global trucabulles_16_bn_gfxPal		@ 32 unsigned chars
	.hidden trucabulles_16_bn_gfxPal
trucabulles_16_bn_gfxPal:
	.hword 0x03EA,0x7FFF,0x75F7,0x72DC,0x7AF3,0x7F79,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(trucabulles_16_bn_gfx)
