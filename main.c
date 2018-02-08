#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("VALUE: %s\n", getenv("FOO"));

    exit(0);
}
