// Module : bit operations support the handling
// of the register manipultiainons on microcontrollers

// header file


#ifndef _H_OPERATION_H
#define _H_OPERATION_H

// function prototypes
void SetBitNof8( unsigned char* target, unsigned char bitNumber);
void ClearBitNof8( unsigned char* target, unsigned char bitNumber);
void FlipBitNof8( unsigned char* target, unsigned char bitNumber);
unsigned char CheckBitNof8( unsigned char target, unsigned char bitNumber);

#endif // _H_OPERATION_H 
