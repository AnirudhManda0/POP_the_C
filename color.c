#include <stdio.h>

#define BLACK   "\x1b[30m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define WHITE   "\x1b[37m"
#define BOLD    "\x1b[1m"
#define RESET   "\x1b[0m"

int main() {
    printf(RED "This is red\n" RESET);
    printf(GREEN "This is green\n" RESET);
    printf(BOLD BLUE "Bold blue text\n" RESET);
    printf(YELLOW "Name: %s, Age: %d\n" RESET, "Ravi", 20);
    return 0;
}