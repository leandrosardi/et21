#include <stdio.h>
#include <stdbool.h>

int main() {
    // Integer variable
    int age = 25;
    
    // Boolean variable
    bool is_active = true;
    
    // Float variable
    float temperature = 98.6;
    
    // String (char pointer)
    char* name = "John";
    
    printf("Age: %d\n", age);
    printf("Active: %s\n", is_active ? "true" : "false");
    printf("Temperature: %.1f\n", temperature);
    printf("Name: %s\n", name);
    
    return 0;
}