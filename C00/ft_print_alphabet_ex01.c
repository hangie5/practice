#include <unistd.h>

void ft_print_alphabet(void)
{
    char i;

    i = 'a';
    while (i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return(0);
}

// In C programming, the return(0) statement typically appears in the main() function. When the main() function is executed, 
// return(0) is a way to signal to the operating system that the program has executed successfully and is terminating.
// return statement in C (and many other programming languages) is used to exit a function and return a value to its caller. 
// In the case of main(), returning 0 signifies that the program completed successfully. This convention is often used to indicate that no errors occurred during execution.
// However, it's important to note that returning 0 from main() is not mandatory. 
// You can also return a non-zero value to indicate different types of errors or conditions. 
// For instance, you might return 1 to indicate a general error, or use different non-zero values to denote specific error codes for more complex programs.
