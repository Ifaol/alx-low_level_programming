#include "main.h"
/**
 *flip_bits - function zt find bits needed to flip a number to another
 *@n: number for the flip input
 *@m: number destination input 4 z flip
 *
 *Return: number of bits for the flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xorResult;
unsigned int bitsToFlip = 0;
xorResult = n ^ m;
while (xorResult)
{
bitsToFlip += xorResult & 1;
xorResult >>= 1;
}
return (bitsToFlip);
}
