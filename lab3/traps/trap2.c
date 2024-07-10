// a + b = 2000

#include <stdio.h>

// Function prototype
int trap2(int a, int b);

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int result = trap2(a, b);
    if (result == 1) {
        printf("Trap 2 disarmed! Congratulations! 🎊\n");
    } else {
        printf("💥💥💥💥 The trap blew up. Ouch. 💥💥💥💥\n");
    }

    return 0;
}

int trap2(int a, int b) {
    int i = 0;     // -0x4(%rbp)
    int sum = 0;   // -0x8(%rbp)

    while (i <= 9) {
        sum += 100;  // 0x64 is 100 in decimal
        i++;
    }

    int edx = a;  // Move a to edx
    int eax = b;  // Move b to eax
    edx += eax;   // edx = edx + eax

    eax = sum;    // Move sum to eax
    eax += eax;   // eax = eax + eax (sum * 2)

    // Compare eax and edx
    if (eax == edx) {
        return 1;  // If equal, return 1
    } else {
        return 0;  // If not equal, return 0
    }
}
