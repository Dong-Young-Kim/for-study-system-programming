#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void main(){
   int x1, x2, y; char buf[20];
   x1 = open("hw4.c", O_RDONLY, 00777);
   x2 = open("cphw4.c", O_RDWR | O_CREAT | O_TRUNC, 00777);
   for (;;){
	   y = read(x1, buf, 20);
	   if(y==0) break;
	   write(x2, buf, y);
   }
}

