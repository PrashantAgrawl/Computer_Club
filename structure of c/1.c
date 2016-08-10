#include <stdio.h>
// aal lines that start with # are processed by preprocessor
//int main(int argc,char *argv[])
// Why main() is important ?

// When you ask your operating system to run a file, it loads it into memory, and jumps to it starting point (_start,etc). At this point, there is an code, that call main and then exit (The linker is responsible to this part). If you will write program without main function, the linker will give you an error, since it couldn't find it.
int main()
{

return 0;
}
