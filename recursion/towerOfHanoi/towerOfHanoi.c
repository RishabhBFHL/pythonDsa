#include <stdio.h>

void TowersOfHanoi(int n, char frompeg, char topeg, char auxpeg) {
    if (n == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", frompeg, topeg);
        return;
    }
    TowersOfHanoi(n - 1, frompeg, auxpeg, topeg);
    printf("Move disk %d from peg %c to peg %c\n", n, frompeg, topeg);
    TowersOfHanoi(n - 1, auxpeg, topeg, frompeg);
}

int main() {
    int n = 3; // You can change this to the desired number of disks
    TowersOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
