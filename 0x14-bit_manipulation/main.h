#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>

/*
 * Convert a binary string to an unsigned integer.
 * @param b: Binary string to convert.
 * @return: Converted unsigned integer.
 */
unsigned int binary_to_uint(const char *b);

/*
 * Check if a given string is a valid binary string.
 * @param b: String to check.
 * @return: 1 if valid, 0 otherwise.
 */
int check_valid_string(const char *b);

/*
 * Write a single character to the standard output.
 * @param c: Character to write.
 * @return: On success, the character written is returned.
 *          On error, -1 is returned.
 */
int _putchar(char c);

/*
 * Print the binary representation of an unsigned long integer.
 * @param n: Unsigned long integer to print in binary.
 */
void print_binary(unsigned long int n);

/*
 * Get the value of a specific bit in an unsigned long integer.
 * @param n: Unsigned long integer.
 * @param index: Index of the bit to get (0-based).
 * @return: Value of the bit (0 or 1).
 */
int get_bit(unsigned long int n, unsigned int index);

/*
 * Set the value of a specific bit in an unsigned long integer to 1.
 * @param n: Pointer to the unsigned long integer.
 * @param index: Index of the bit to set (0-based).
 * @return: 1 if successful, -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index);

/*
 * Clear (set to 0) the value of a specific bit in an unsigned long integer.
 * @param n: Pointer to the unsigned long integer.
 * @param index: Index of the bit to clear (0-based).
 * @return: 1 if successful, -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/*
 * Calculate the number of bits needed to flip to transform one number
 * @param n: First unsigned long integer.
 * @param m: Second unsigned long integer.
 * @return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*
 * Determine the endianness of the system.
 * @return: 1 for little-endian, 0 for big-endian.
 */
int get_endianness(void);

#endif
