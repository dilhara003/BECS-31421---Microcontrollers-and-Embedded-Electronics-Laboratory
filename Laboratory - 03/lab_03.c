// Define the address and bit for the switch
// Main function
void knightrider(void) {
    int i;
   // Step 1: Set all pins of PORTB as outputs
   // Step 2: Initialize PORTB with the first LED lit
    PORTB = 0x01; // Hint: Initialize PORTB to light the first LED (RB0)
   // Step 3: Define the left shift loop
    for (i = 1; i <= 7; i++) {
    Delay_ms(100); // Hint: Delay for smoother animation
    PORTB = (PORTB << 1); // Hint: Shift the lit LED to the left
   // Step 4: Delay for smoother animation

    }
   // Step 5: Define the right shift loop
    for (i = 7; i >=1; i--) {
        Delay_ms(100);
        PORTB = (PORTB >>1); // Hint: Shift the lit LED to the right
   // Step 6: Delay for smoother animation

    }
}
void main() {
// Step 1: Initialize configuration settings
 CMCON = 0x07; // Hint: Disable Comparator
 TRISB = 0x00; // Hint: Configure TRISB register
 TRISA = 0x00;
 PORTB = 0x00 ; // Hint: Initialize PORTB register
// Step 2: Enter the first loop
    while (1) { //Hint: Enter a condition for the infinite loop
    knightrider(); // Call the knightrider function
    }
}