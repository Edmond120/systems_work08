#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(){
	struct stat buffer;
	stat("test.txt",&buffer);
	printf("size:%ld\n",buffer.st_size);
	printf("mode(permissions): %ld\n",buffer.st_mode);
	printf("time of last access: %s\n",ctime(&buffer.st_atime));
	return 0;
}
