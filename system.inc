%define	stdin	    0
%define	stdout	    1
%define	stderr	    2

%define SYS_nosys   0
%define	SYS_exit    1
%define	SYS_fork    2
%define	SYS_read    3
%define	SYS_write   4

section	.text
align 4
access.the.bsd.kernel:
    syscall
    ret

%macro	system	1
    mov	rax, %1
    call    access.the.bsd.kernel
%endmacro

%macro	sys.exit    0
    system  SYS_exit
%endmacro

%macro	sys.write   0
    system  SYS_write
%endmacro
