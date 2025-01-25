
@{{BLOCK(bulle16_bn_gfx)

@=======================================================================
@
@	bulle16_bn_gfx, 16x16@4, 
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
	.global bulle16_bn_gfxTiles		@ 128 unsigned chars
	.hidden bulle16_bn_gfxTiles
bulle16_bn_gfxTiles:
	.word 0xDD950000,0x9ACC9000,0x68AAD900,0x10CCAD90,0x669DFDD0,0x6DD9F996,0x09F94B69,0x06D91699
	.word 0x00009ADD,0x000DDD99,0x009A4031,0x09699111,0x4A593111,0x96001110,0xA5001110,0xA4001111
	.word 0x98111B69,0x91111B69,0x377036D5,0x77774660,0x77706D50,0x975DD600,0x96DD9000,0x99500000
	.word 0xA6699111,0xA66FC411,0x9D9ACA06,0x5DD99977,0x09DDD997,0x009FD999,0x0009DD99,0x00000699

	.section .rodata
	.align	2
	.global bulle16_bn_gfxPal		@ 32 unsigned chars
	.hidden bulle16_bn_gfxPal
bulle16_bn_gfxPal:
	.hword 0x4DE8,0x4D89,0x41C8,0x4DC8,0x4E0A,0x5209,0x6A29,0x4A48
	.hword 0x7E88,0x566E,0x7E54,0x7F48,0x7E9B,0x7F33,0x27FC,0x7FFF

@}}BLOCK(bulle16_bn_gfx)
