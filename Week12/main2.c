#include <stdio.h>
#include <stdio.h>
#include <memory.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	char buffer[256];
	const char* fl_mode;
	int append = 0;
	FILE* fl;

	for (int i = 1; i < argc; i ++){
		if (strcmp(argv[i], "-a") == 0){
			append = 24000;
		}
	}
	if (append != 0){
		fl_mode = "a";
	}
	else{
		fl_mode = "w";
	}
	fread(buffer, 1, 256, stdin);
	for (int i = 1; i < argc; i ++){
 		if (strcmp(argv[i], "-a") == 0){
			continue;
		}
		fl = fopen(argv[i], fl_mode);
		fprintf(fl, "%s", buffer);
		fclose(fl);
	}
	printf("%s", buffer);
	return 0;
}
