#include "dict.h"

void ll_append(ll_t **ll, char key, int value)
{
	// if it is the first element in ll
	if ((*ll) == NULL)
	{
		(*ll) = (ll_t *)malloc(sizeof(ll_t));
		(*ll)->key = key;
		(*ll)->value = value;
		(*ll)->next = NULL;
		return;
	}

	while ((*ll) != NULL)
	{
		ll = &(*ll)->next;
	}
	(*ll) = (ll_t *)malloc(sizeof(ll_t));
	(*ll)->key = key;
	(*ll)->value = value;
	(*ll)->next = NULL;
}

void ll_print(ll_t *ll)
{
	while (ll != NULL)
	{
		printf("key: %c\tvalue: %d\n", ll->key, ll->value);
		ll = ll->next;
	}
}

void ll_set(ll_t **ll, char key)
{
	while ((*ll) != NULL)
	{
		if ((*ll)->key == key)
		{
			((*ll)->value)++;
			return;
		}
		ll = &(*ll)->next;
	}
	ll_append(ll, key, 1);
}