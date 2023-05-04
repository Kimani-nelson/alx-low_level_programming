#ifndef MAIN_H
#define MAIN_H

/* Convert a binary string to an unsigned int */
unsigned int binary_to_uint(const char *b);

/* Print the binary representation of an unsigned long int */
void print_binary(unsigned long int n);

/* Get the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

/* Set the value of a bit at a given index to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* Set the value of a bit at a given index to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Return the number of bits that need to be flipped in n to make it equal to m */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Determine the endianness of the system */
int get_endianness(void);

#endif /* MAIN_H */
