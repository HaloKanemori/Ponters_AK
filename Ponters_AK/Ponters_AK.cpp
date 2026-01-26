#include <iostream>


using namespace std;

void add(int* ptr) {
    (*ptr)++;
}

int main()
{
    int a = 5;
    int b = 9;
    
    int* a_ptr = &a;
    int* b_ptr = &b;

    int x = *a_ptr;
    int y = *b_ptr;

    
}

