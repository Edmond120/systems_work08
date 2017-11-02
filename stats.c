#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

const char *units[] = {"B", "kB", "MB", "GB", "TB"};

int main(){
  struct stat buffer;
  stat("text.txt",&buffer);
  double bytes = buffer.st_size;

  int i = 0;
  while (bytes > 1000) {
    bytes /= 1000;
    i++;
  }
  printf("filesize: %.*f %s\n", i, bytes, units[i]);
  printf("mode(permissions): %3o\n",buffer.st_mode&0777);
  printf("time of last access: %s\n",ctime(&buffer.st_atime));
  return 0;
}

