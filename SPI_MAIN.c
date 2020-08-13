/*
 * File:   SPI_MAIN.c
 * Author: ELDEMELAWY
 *
 * Created on August 13, 2020, 5:17 AM
 */


#include <avr/io.h>

void spi_init ()
{
    SPCR = (1<<SPE); // SPI ENABLE
    SPCR = (1<<DORD); //  The LSB of the data word is transmitted first
    SPCR = (1<<MSTR); //  Master SPI mode 
    SPCR = (1<<CPOL); // LEADING FALLING EDGE 
    SPCR = (1<<SPR1); // TO FOSC/64
}
void spi_master ()
{
   void pinbas_ (int Pin_b4,int OUT ); // SS IS O/P
   void pinbas_ (int Pin_b5,int OUT); // MOSI IS O/P
   void pinbas_ (int Pin_b6,int IN ); // MISO IS I/P
   void pinbas_ (int Pin_b7,int OUT); // SCK IS O/P
}
void spi_slave ()
{
    void pinbas_ (int Pin_b4,int IN);// SS IS I/P
   void pinbas_ (int Pin_b5,int IN );// MOSI IS I/P
   void pinbas_ (int Pin_b6,int OUT);// MISO IS O/P 
   void pinbas_ (int Pin_b7,int IN); // SCK IS I/P
}

int main(void) {
    while (1) {
    }
}
