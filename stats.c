#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(){
	struct stat buffer;
	stat("text.txt",&buffer);
	long bytes = buffer.st_size;
	int gigabytes = bytes / 1000000000;
	int megabytes = (bytes - (gigabytes * 1000000000)) / 1000000;
	bytes = bytes - (megabytes*1000000 + gigabytes*1000000000);
	printf("size: gb:%d mb:%d b:%ld\n",gigabytes,megabytes,bytes);
	printf("mode(permissions): %3o\n",buffer.st_mode&0777);
	printf("time of last access: %s\n",ctime(&buffer.st_atime));
	return 0;
}
