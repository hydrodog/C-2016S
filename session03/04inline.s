	.file	"04inline.cc"
.lcomm __ZStL8__ioinit,1,1
	.text
	.globl	__Z3addii
	.def	__Z3addii;	.scl	2;	.type	32;	.endef
__Z3addii:
LFB1018:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	8(%ebp), %edx
	movl	12(%ebp), %eax
	addl	%edx, %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1018:
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1019:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$0, 28(%esp)
	movl	$0, 24(%esp)
	jmp	L4
L5:
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	__Z3addii
	movl	%eax, 28(%esp)
	addl	$1, 24(%esp)
L4:
	cmpl	$99999999, 24(%esp)
	jle	L5
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1019:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1020:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L7
	cmpl	$65535, 12(%ebp)
	jne	L7
	movl	$__ZStL8__ioinit, (%esp)
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___dso_handle, 8(%esp)
	movl	$__ZStL8__ioinit, 4(%esp)
	movl	$__ZNSt8ios_base4InitD1Ev, (%esp)
	call	___cxa_atexit
L7:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1020:
	.def	__GLOBAL__sub_I__Z3addii;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I__Z3addii:
LFB1021:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1021:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I__Z3addii
	.ident	"GCC: (GNU) 4.9.2"
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	___cxa_atexit;	.scl	2;	.type	32;	.endef
