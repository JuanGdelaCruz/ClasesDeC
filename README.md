# ClasesAndrea
Índice
---------------------------------------------
Contenidos
#1) main
#2) types
	##2.1 char / signed  char / unsigned char
	##2.2 int / unsigned int
	##2.3 short / signed short / unsigned short
	##2.4 long / unsigned long
	##2.5 float
	##2.6 double / long double
	##2.7 void
3) Operators : arithmetic, increment/decrement, assigment, relational, logical, sizeof
4) Pointers: indirection (*) , address-of (&)
5) Arrays
	5.1 Strings: size_t strlen(const char *s),  char *strcpy(char *dest, const char *src),  int strcmp(const char *s1, const char *s2),  char *strcat(char *dest, const char *src);        #include <string.h>
6) Loops: while, do while; for,
7) Standard IO (stdin=0 , stdout=1, stderr= 2)  #include <stdio.h> 
8) Return & Exit
9) Function (declaration & definition)
10) Basic functions	
	10.1 fprintf(File *stream, const char*format,...)      #include <stdio.h> 
	10.2 write(int fd, const void * buf, size_t count) & read(int fd, void *buf, size_t count) #include <unistd.h>
11) Avanced functions
	11.1 int fork()
	11.2 exec
	11.3 int open(const char *path, int flags), int close(int fd)
	11.4 Pipes: pipe, dup,dup2
12) errno
13) structures
