#include "3-calc.hi"
/**
 * op_add - ADD
 *
 * @a: Sumand 1
 * @b: Sumand 2
 * Return: Add operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - SUBTRACTION
 *
 * @a: Minuend
 * @b: Sustraend
 * Return: Subtraction operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - MULTIPLICATION
 *
 * @a: MULTIPLICAND
 * @b: MULTIPLICATOR
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - DIVISION
 *
 * @a: A
 * @b: B
 * Return: Division operation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - DIVISION REMAINDER
 *
 * @a: A
 * @b: B
 * Return: Mod operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}

