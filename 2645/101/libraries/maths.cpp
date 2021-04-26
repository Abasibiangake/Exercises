#include "maths.h"

int sum(int a, int b) { return a  + b; }

int product(int a, int b) { return a * b; }

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }  
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
    
}

