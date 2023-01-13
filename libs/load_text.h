#ifndef __LOAD_TEXT_H__
#define __LOAD_TEXT_H__

#include <stdio.h>
#include <stdlib.h>

#define CHUNK 10000

int read_file(char **text, const char *filename, long long *total_nread);
void print_text(char *text, long long total_nread);

#endif