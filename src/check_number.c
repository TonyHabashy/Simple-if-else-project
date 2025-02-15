#include <stdio.h>
#include "../include/check_number.h"

const char* checkNumber(int num) {
    if (num % 2 == 0) {
        return "The number is even.";
    } else {
        return "The number is odd.";
    }
}
