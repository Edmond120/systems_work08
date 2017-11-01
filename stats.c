#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(){
	struct stat buffer;
	stat("text.txt",&buffer);
	printf("size:%ld\n",buffer.st_size);
	printf("mode(permissions): %3o\n",buffer.st_mode&0777);
	printf("time of last access: %s\n",ctime(&buffer.st_atime));
	return 0;
}
