a function that takes a pointer to an int as parameter and updates the value it points to to 98
a function that swaps the values of two integers  Prototype: void swap_int(int *a, int *b);
a function that returns the length of a string.Prototype: int _strlen(char *s);
function that prints a string, followed by a new line, to stdout. Prototype: void _puts(char *str);
a function that prints a string, in reverse, followed by a new line. Prototype: void print_rev(char *s);
function that reverses a string. Prototype: void rev_string(char *s);
a function that prints every other character of a string, starting with the first character, followed by a new line. Prototype: void puts2(char *str);
a function that prints half of a string, followed by a new line. Prototype: void puts_half(char *str);
a function that prints n elements of an array of integers, followed by a new line. Prototype: void print_array(int *a, int n); where n is the number of elements of the array to be printed
a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. Return value: the pointer to dest
a function that convert a string to an integer.Prototype: int _atoi(char *s);  The number in the string can be preceded by an infinite number of characters You need to take into account all the - and + signs before the number If there are no numbers in the string, the function must return 0
a program that generates random valid passwords for the program 101-crackme.  You are allowed to use the standard library You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests) man srand, rand, time gdb and objdump can help
