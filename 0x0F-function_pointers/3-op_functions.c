#ifndef _3_CALC_H_
#define _3_CALC_H_

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b);

/**
 * op_sub - Returns the subtraction of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b);

/**
 * op_mul - Returns the multiplication of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The multiplication of a and b.
 */
int op_mul(int a, int b);

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number (non-zero).
 *
 * Return: The quotient of a divided by b.
 */
int op_div(int a, int b);

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number (non-zero).
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b);

#endif /* _3_CALC_H_ */
