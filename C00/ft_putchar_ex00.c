#include <unistd.h>

void    ft_putchar(char a)
{
    write(1, &a, 1);
}

int main(void)
{
    ft_putchar('a');
}