#include "main.h"
/**
 * _isalpha - print alphabet in lower and uppercase
 *@c: character
 * Return:Always 0 (successful)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
