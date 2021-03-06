#include <unistd.h>
#include <stdio.h>

int main (int argc, char* argv[])
{
    // First check to make sure that there are three arguments
    if (argc != 3)
    {
        printf("usage: hlink [source] [target]\n");
        return 1;
    }

    int ret = link(argv[1], argv[2]);

    if (ret != 0)
    {
        perror("link");
    }
    return ret;
}
