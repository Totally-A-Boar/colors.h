#include <stdio.h>
#include "../include/colors/colors.h"

int main() {
    printf("Hello, World!");
    grey();
    printf("\nHello, World in gray!");
    reset();
    red();
    printf("\nHello, World in red!");
    reset();
    green();
    printf("\nHello, World in green!");
    reset();
    yellow();
    printf("\nHello, World in yellow!");
    reset();
    blue();
    printf("\nHello, World in blue!");
    reset();
    magenta();
    printf("\nHello, World in magenta!");
    reset();
    cyan();
    printf("\nHello, World in cyan!");
    reset();
    white();
    printf("\nHello, World in white!");
    reset();
    
    on_grey();
    printf("\n\nHello, World on grey background!");
    reset();
    on_red();
    printf("\nHello, World on red background!");
    reset();
    on_green();
    printf("\nHello, World on green background!");
    reset();
    on_yellow();
    printf("\nHello, World on yellow background!");
    reset();
    on_blue();
    printf("\nHello, World on blue background!");
    reset();
    on_magenta();
    printf("\nHello, World on magenta background!");
    reset();
    on_cyan();
    printf("\nHello, World on cyan background!");
    reset();
    on_white();
    printf("\nHello, World on white background!");
    reset();
    reset();
}