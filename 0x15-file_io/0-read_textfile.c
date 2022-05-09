#include "main.h"
/**
 * read_textfile - a function to return number of characters printed\
 * @filename: the file to be printed
 * @letters: number of letter to be printed
 * Return: an int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int nl;
ssize_t nr,nw;
char *ptr;
if (!filename)
	return (0);
nl = open(filename,O_RDONLY);
if (nl == -1)
	return (0);
ptr = malloc(sizeof(char) * letters);
if (!ptr)
	return (0);
nr = read(nl, ptr, letters);
nw = write(STDOUT_FILENO, ptr, nr);
return (nw);
close(nl);
free(ptr);
}
