#include "main.h"

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Filename not specified\n");
		exit(0);
	}

	char *text;
	long long total_size;
	read_file(&text, argv[1], &total_size);
	print_text(text, total_size);

	ll_t *dict;
	for (long long i = 0; i < total_size; i++)
	{
		ll_set(&dict, text[i]);
	}
	ll_print(dict);
}