
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0004 	ldr	r0, [pc, #4]	; 14 <main+0x14>
   c:	ebfffffe 	bl	0 <Uart_Send_string>
  10:	e8bd8800 	pop	{fp, pc}
  14:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	6d6d694a 	stclvs	9, cr6, [sp, #-296]!	; 0xfffffed8
   4:	73692079 	cmnvc	r9, #121	; 0x79
   8:	61656c20 	cmnvs	r5, r0, lsr #24
   c:	6e696e72 	mcrvs	14, 3, r6, cr9, cr2, {3}
  10:	6e692067 	cdpvs	0, 6, cr2, cr9, cr7, {3}
  14:	70656420 	rsbvc	r6, r5, r0, lsr #8
  18:	3a206874 	bcc	81a1f0 <main+0x81a1f0>
  1c:	00000029 	andeq	r0, r0, r9, lsr #32
	...

Disassembly of section .rodata:

00000000 <string_buffer2>:
   0:	6d6d694a 	stclvs	9, cr6, [sp, #-296]!	; 0xfffffed8
   4:	73692079 	cmnvc	r9, #121	; 0x79
   8:	61656c20 	cmnvs	r5, r0, lsr #24
   c:	6e696e72 	mcrvs	14, 3, r6, cr9, cr2, {3}
  10:	6e692067 	cdpvs	0, 6, cr2, cr9, cr7, {3}
  14:	70656420 	rsbvc	r6, r5, r0, lsr #8
  18:	3a206874 	bcc	81a1f0 <main+0x81a1f0>
  1c:	00000029 	andeq	r0, r0, r9, lsr #32
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	2029554e 	eorcs	r5, r9, lr, asr #10
   c:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  10:	Address 0x00000010 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.

