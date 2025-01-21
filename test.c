#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUF_SIZE 1024

int outCStr(const char *cstr){
    int cnt;
    cnt = write(STDOUT_FILENO, cstr, strlen(cstr));
    return cnt;
}

int main(int argc, char *argv[])
{
    char line[BUF_SIZE];
    int cnt;

    outCStr("Enter 'quit' to end the program\n");

    while(1)
    {
        outCStr("Please enter a line of text\n");
        cnt = read(STDIN_FILENO, line, BUF_SIZE);

        if (strncmp(line, "quit", 4)==0) break;
    }


    exit(EXIT_SUCCESS);
}