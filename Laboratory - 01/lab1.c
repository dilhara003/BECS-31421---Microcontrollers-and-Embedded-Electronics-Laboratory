void main() {
     CMCON=0x07; //Disable comparators
     TRISB=0x00; // Configure PORTB as output

     do{
        PORTB = 0xFF; //Turn ON all LEDs on PORTB
        Delay_ms(500); //500 ms Delay
        
        PORTB =0x00; //Turn OFF all LEDs on PORTB
        Delay_ms(500); //500ms Delay
        
        }
        while(1); // infinite loop
}