#include "main.h"
/**
 * _isalpha - determine if @c is alpha
 * @c: parameter to check
 * Return: 1 if @c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int a;
	
	a = ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 0;
	return (a);
}
