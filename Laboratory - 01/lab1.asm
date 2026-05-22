
_main:

;lab1.c,1 :: 		void main() {
;lab1.c,2 :: 		CMCON=0x07; //Disable comparators
	MOVLW      7
	MOVWF      CMCON+0
;lab1.c,3 :: 		TRISB=0x00; // Configure PORTB as output
	CLRF       TRISB+0
;lab1.c,5 :: 		do{
L_main0:
;lab1.c,6 :: 		PORTB = 0xFF; //Turn ON all LEDs on PORTB
	MOVLW      255
	MOVWF      PORTB+0
;lab1.c,7 :: 		Delay_ms(500); //500 ms Delay
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
	NOP
;lab1.c,9 :: 		PORTB =0x00; //Turn OFF all LEDs on PORTB
	CLRF       PORTB+0
;lab1.c,10 :: 		Delay_ms(500); //500ms Delay
	MOVLW      6
	MOVWF      R11+0
	MOVLW      19
	MOVWF      R12+0
	MOVLW      173
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	DECFSZ     R11+0, 1
	GOTO       L_main4
	NOP
	NOP
;lab1.c,13 :: 		while(1); // infinite loop
	GOTO       L_main0
;lab1.c,14 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
