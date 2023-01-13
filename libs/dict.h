#ifndef __DICT_H__
#define __DICT_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct ll_s
{
	char key;
	int value;
	struct ll_s *next;
} ll_t;

void ll_set(ll_t **ll, char key);
void ll_print(ll_t *ll);

#endif