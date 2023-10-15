#include <unistd.h>

int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 0;

    while (message[len] != '\0') {
        len++;
    }

    write(2, message, len);

    return 1;
}
