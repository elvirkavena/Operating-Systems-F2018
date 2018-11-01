#include <stdio.h>
#include <sys/mman.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	char* is_mapped;
	struct stat fStat;
	int fOpen;
	stat("ex1.txt", &fStat);
	fOpen = open("ex1.txt", O_RDWR);  
	size_t sz = (size_t)fStat.st_size;
	char* phrase = "This is a nice day!";
	size_t phraseLen = strlen(phrase);
	sz = sz < phraseLen ? phraseLen: sz;
	mmap(0, sz, PROT_READ| PROT_WRITE, MAP_SHARED, fOpen, 0);
	memset(is_mapped, ' ', sz);
	strcpy(is_mapped, phrase);
	is_mapped[phraseLen] = ' ';
	munmap(is_mapped, sz);
	return 0;
}
