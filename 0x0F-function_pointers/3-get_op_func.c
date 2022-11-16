#include "3-calc.h"

/**
 * get_op_func - select the correct function
 * to perform operation requested by user
 * @s: char operator
 *
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int y = 0;

	while (y < 10)
	{
		if (s[0] == ops->op[y])
			break;
		y++;
	}

	return (ops[y / 2].f);
}
