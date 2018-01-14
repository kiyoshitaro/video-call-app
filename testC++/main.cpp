#include <iostream>


void swap(int& i, int& j) {
    int t = i;
    i = j;
    j = t;
}
    
int main() {
    const int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    const int *p1 = array + 1;
    const int *p2 = array + 8;
    swap(--p1, ++p2);
    std::cout << *p1 << " and " << *p2 << std::endl; // should write 9 and 0 ...
    return 0;
}