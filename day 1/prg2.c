#include <stdio.h>

int main() {
    
    int a = 6, b = 20, c = 2, result;

    
    result = a + b * c;
    printf("Result of a + b * c (5 + 10 * 2): %d\n", result);
    
    result = a + b * c - a / c;
    printf("Result of a + b * c - a / c (5 + 10 * 2 - 5 / 2): %d\n", result);
    
    result = (a + b) * c;
    printf("Result of (a + b) * c ((5 + 10) * 2): %d\n", result);
    
    int x = 4, y = 9;
    result = x++ + ++y;  
    printf("Result of x++ + ++y (x = 2, y = 3): %d\n", result);
    
    result = (a > b) ? a : b; 
    printf("Result of (a > b) ? a : b (5 > 10): %d\n", result); 
    
    result = a * b / c + a - b;
    printf("Result of a * b / c + a - b (5 * 10 / 2 + 5 - 10): %d\n", result); 
    
    int equal = (a == b) && (x < y); 
    printf("Result of (a == b) && (x < y) (5 == 10 && 2 < 3): %d\n", equal); 
    y -= 2;  
    printf("After x += 3 and y -= 2, x = %d, y = %d\n", x, y);
    result = (a = 7, b = 8, a + b);
    printf("Result of (a = 7, b = 8, a + b): %d\n", result); 
    result 0;
}

