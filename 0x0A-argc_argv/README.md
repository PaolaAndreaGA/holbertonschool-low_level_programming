There are at least two arguments to main: argc and argv. The first of these is a count of the arguments supplied to the program and the second is an array of pointers to the strings which are those arguments—its type is (almost) ‘array of pointer to char’. These arguments are passed to the program by the host system's command line interpreter or job control language.

The declaration of the argv argument is often a novice programmer's first encounter with pointers to arrays of pointers and can prove intimidating. However, it is really quite simple to understand. Since argv is used to refer to an array of strings, its declaration will look like this:

char *argv[]
Remember too that when it is passed to a function, the name of an array is converted to the address of its first element. This means that we can also declare argv as char **argv; the two declarations are equivalent in this context.

Indeed, you will often see the declaration of main expressed in these terms. This declaration is exactly equivalent to that shown above:

int main(int argc, char **argv);
When a program starts, the arguments to main will have been initialized to meet the following conditions:

argc is greater than zero.
argv[argc] is a null pointer.
argv[0] through to argv[argc-1] are pointers to strings whose meaning will be determined by the program.
argv[0] will be a string containing the program's name or a null string if that is not available. Remaining elements of argv represent the arguments supplied to the program. In cases where there is only support for single-case characters, the contents of these strings will be supplied to the program in lower-case.