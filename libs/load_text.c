#include "load_text.h"

int read_file(char **text, const char *filename, long long *total_nread)
{
	*text = (char *)malloc(CHUNK * sizeof(char));

	FILE *fp = fopen(filename, "r");

	int chunks = 1;
	int nread = 0;

	*total_nread = fread(*text, sizeof(char), CHUNK, fp);
}

void print_text(char *text, long long total_nread)
{
	fwrite(text, 1, total_nread, stdout);
	printf("\n");
}