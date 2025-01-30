#include <stdio.h>

int main() {
    
    int *p = (int *)0x2000; // A low memory address, which is accessible to user mode programs.
    //int *p = (int *)0xffffffff; // A high memory address,(kernel memory address) which
    // is not accessible to user mode programs.

    *p = 12;

    printf(" value in p is %d\n", *p);

}

// ou don't see any output is that you are attempting to write to a specific memory address (0x2000 in this case). This address may not be valid or accessible for your program, leading to undefined behavior, which could cause your program to crash or exit unexpectedly.

// Here are a few points to consider:

// Memory Access Violation: Writing to a specific memory address without proper permissions or a valid reason can cause a segmentation fault or access violation. This is especially true for low or high memory addresses.

// Initialization: The memory at address 0x2000 might not be allocated to your program, or it could be protected. Accessing such memory could lead to crashes.

// Output: Since the program may crash or behave unexpectedly, the printf statement might not be executed.