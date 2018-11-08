#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <unistd.h>

int main(){
	int randomData = open("/dev/random", O_RDONLY);
	if (randomData < 0){
		printf("Error");
	}
	else{
		char myRandomData[20];
		size_t randomDataLen = 0;
		while (randomDataLen < sizeof myRandomData){
		ssize_t result = read(randomData, myRandomData + randomDataLen, (sizeof myRandomData) - randomDataLen);
		if (result < 0){
			printf("Error");
		}
		randomDataLen += result;
		}
		printf("%s", myRandomData);
		close(randomData);
	}
}
