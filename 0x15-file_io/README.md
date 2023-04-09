# C-File I/O.
File I/O in C is used for reading and writing data to files. It is an important feature of the language that allows programs to work with data stored on the file system.
This allows programs to work with data stored in files on the file system. This data can be text, binary data and any other type of data that can be stored in files.

Below is an example of File I/O operations in C;
###
	#include <stdio.h>
int main() {
   FILE *fp;
   char buffer[255];

   fp = fopen("example.txt", "r");
   if (fp == NULL) {
      printf("Error: Could not open file\n");
      return 1;
   }

   fgets(buffer, 255, fp);
   printf("The first line of the file is: %s\n", buffer);

   fclose(fp);
   return 0;
}
------------------------------------------------
## File descriptors in C.
This is a proces  uniques identifier for a file or other input / output resources such as pipe or network sockets.

#### About.
In this directory of my repository i would be making use of File I/O operations in C to complete required task.
