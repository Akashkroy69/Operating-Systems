#include <unistd.h>

int main() {
    write(1, "Hello, World!\n", 14);  // System call to print text
    return 0;
}
