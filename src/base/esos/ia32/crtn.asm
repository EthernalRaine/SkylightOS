; crtn.asm
; Created on Tue Apr 04 2023 by Laura Raine (lnkexploit)
; Added for Codename: "Esaul"
; Copyright (c) 2023 - SkylightOS Project

section .init
	; crtend.o .init placed here by gcc
	pop ebp
	ret

section .fini
	; crtend.o .fini placed here by gcc
	pop ebp
	ret