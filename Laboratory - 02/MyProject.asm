
_main:

;MyProject.c,4 :: 		void main() {
;MyProject.c,6 :: 		CMCON = 0x07; // Hint: Disable Comparator
	MOVLW      7
	MOVWF      CMCON+0
;MyProject.c,7 :: 		TRISA = 0x00; // Hint: Configure TRISA register
	CLRF       TRISA+0
;MyProject.c,8 :: 		TRISB = 0x00; // Hint: Configure TRISB register
	CLRF       TRISB+0
;MyProject.c,9 :: 		PORTB = 0x00 ; // Hint: Initialize PORTB register
	CLRF       PORTB+0
;MyProject.c,10 :: 		RA2_bit = 0x00 ; // Hint: Set RA2_bit to low state
	BCF        RA2_bit+0, BitPos(RA2_bit+0)
;MyProject.c,12 :: 		do {
L_main0:
;MyProject.c,14 :: 		if(sw == 1 ) {
	BTFSS      RA2_bit+0, BitPos(RA2_bit+0)
	GOTO       L_main3
;MyProject.c,16 :: 		PORTB = 0X00;
	CLRF       PORTB+0
;MyProject.c,17 :: 		}
	GOTO       L_main4
L_main3:
;MyProject.c,20 :: 		PORTB = 0XFF;
	MOVLW      255
	MOVWF      PORTB+0
;MyProject.c,21 :: 		}
L_main4:
;MyProject.c,22 :: 		} while(1); // Hint: Enter a condition for the infinite loop
	GOTO       L_main0
;MyProject.c,23 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
