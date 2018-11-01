#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

int main (int argc, char **argv) {
	struct stat Stat;
	int sfd = open("ex1.txt", O_RDONLY);
	fstat(sfd, &Stat);
	size_t filesize = lseek(sfd,0,SEEK_END);
  
	char *src;
	src = mmap(NULL,Stat.st_size, PROT_READ, MAP_PRIVATE, sfd, 0 );
  
	int dfd;
	dfd = open("ex1.memcpy.txt", O_RDWR|O_CREAT, 0666);
  
	ftruncate(dfd, Stat.st_size);
  
	char *dest;
	dest = mmap(NULL, Stat.st_size, PROT_READ|PROT_WRITE, MAP_SHARED, dfd,0);
  
	memcpy(dest,src,Stat.st_size);
	munmap(src, Stat.st_size);
	munmap(dest, Stat.st_size);
	close(sfd);
	close(dfd);
	return 0;
}
