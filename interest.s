	.arch armv6
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"interest.c"
	.text
	.section	.rodata
	.align	2
.LC1:
	.ascii	"Enter interest rate: \000"
	.align	2
.LC2:
	.ascii	"%d\000"
	.align	2
.LC3:
	.ascii	"Enter number of years: \000"
	.align	2
.LC4:
	.ascii	"Years\011%d%%\011%d%%\011%d%%\011%d%%\011%d%%\012\000"
	.align	2
.LC5:
	.ascii	"%d\011\000"
	.align	2
.LC6:
	.ascii	"%.2f\011\000"
	.align	3
.LC0:
	.word	0
	.word	1079574528
	.word	0
	.word	1079574528
	.word	0
	.word	1079574528
	.word	0
	.word	1079574528
	.word	0
	.word	1079574528
	.text
	.align	2
	.global	main
	.arch armv6
	.syntax unified
	.arm
	.fpu vfp
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 80
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #88
	ldr	r3, .L9+8
	sub	ip, fp, #84
	mov	lr, r3
	ldmia	lr!, {r0, r1, r2, r3}
	stmia	ip!, {r0, r1, r2, r3}
	ldmia	lr!, {r0, r1, r2, r3}
	stmia	ip!, {r0, r1, r2, r3}
	ldm	lr, {r0, r1}
	stm	ip, {r0, r1}
	ldr	r0, .L9+12
	bl	printf
	sub	r3, fp, #20
	mov	r1, r3
	ldr	r0, .L9+16
	bl	__isoc99_scanf
	ldr	r0, .L9+20
	bl	printf
	sub	r3, fp, #16
	mov	r1, r3
	ldr	r0, .L9+16
	bl	__isoc99_scanf
	mov	r3, #0
	str	r3, [fp, #-12]
	b	.L2
.L3:
	ldr	r2, [fp, #-20]
	ldr	r3, [fp, #-12]
	add	r2, r2, r3
	ldr	r3, [fp, #-12]
	lsl	r3, r3, #2
	sub	r1, fp, #4
	add	r3, r1, r3
	str	r2, [r3, #-36]
	ldr	r3, [fp, #-12]
	add	r3, r3, #1
	str	r3, [fp, #-12]
.L2:
	ldr	r3, [fp, #-16]
	ldr	r2, [fp, #-12]
	cmp	r2, r3
	blt	.L3
	ldr	r1, [fp, #-40]
	ldr	r0, [fp, #-36]
	ldr	ip, [fp, #-32]
	ldr	r3, [fp, #-28]
	ldr	r2, [fp, #-24]
	str	r2, [sp, #4]
	str	r3, [sp]
	mov	r3, ip
	mov	r2, r0
	ldr	r0, .L9+24
	bl	printf
	mov	r3, #1
	str	r3, [fp, #-8]
	b	.L4
.L7:
	ldr	r1, [fp, #-8]
	ldr	r0, .L9+28
	bl	printf
	mov	r3, #0
	str	r3, [fp, #-12]
	b	.L5
.L6:
	ldr	r3, [fp, #-12]
	lsl	r3, r3, #3
	sub	r2, fp, #4
	add	r3, r2, r3
	sub	r3, r3, #80
	vldr.64	d6, [r3]
	ldr	r3, [fp, #-12]
	lsl	r3, r3, #2
	sub	r2, fp, #4
	add	r3, r2, r3
	ldr	r3, [r3, #-36]
	vmov	s15, r3	@ int
	vcvt.f64.s32	d7, s15
	vmul.f64	d7, d6, d7
	vldr.64	d6, .L9
	vmul.f64	d6, d7, d6
	ldr	r3, [fp, #-12]
	lsl	r3, r3, #3
	sub	r2, fp, #4
	add	r3, r2, r3
	sub	r3, r3, #80
	vldr.64	d7, [r3]
	vadd.f64	d7, d6, d7
	ldr	r3, [fp, #-12]
	lsl	r3, r3, #3
	sub	r2, fp, #4
	add	r3, r2, r3
	sub	r3, r3, #80
	vstr.64	d7, [r3]
	ldr	r3, [fp, #-12]
	lsl	r3, r3, #3
	sub	r2, fp, #4
	add	r3, r2, r3
	sub	r3, r3, #80
	ldrd	r2, [r3]
	ldr	r0, .L9+32
	bl	printf
	ldr	r3, [fp, #-12]
	add	r3, r3, #1
	str	r3, [fp, #-12]
.L5:
	ldr	r3, [fp, #-12]
	cmp	r3, #4
	ble	.L6
	mov	r0, #10
	bl	putchar
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L4:
	ldr	r3, [fp, #-16]
	ldr	r2, [fp, #-8]
	cmp	r2, r3
	ble	.L7
	mov	r3, #0
	mov	r0, r3
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, pc}
.L10:
	.align	3
.L9:
	.word	1202590843
	.word	1065646817
	.word	.LC0
	.word	.LC1
	.word	.LC2
	.word	.LC3
	.word	.LC4
	.word	.LC5
	.word	.LC6
	.size	main, .-main
	.ident	"GCC: (Raspbian 8.3.0-6+rpi1) 8.3.0"
	.section	.note.GNU-stack,"",%progbits
