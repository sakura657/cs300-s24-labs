// a >= 1311


#include <stdio.h>

int trap1(int input) {
    int secret = 1310;
    return input > secret ? 1 : 0;
}

int main() {
    int input;
    printf("Enter code to disarm the trap: ");
    scanf("%d", &input);

    int result = trap1(input);
    if (result == 1) {
        printf("Trap 1 disarmed! Congratulations! 🎊\n");
    } else {
        printf("💥💥💥💥 The trap blew up. Ouch. 💥💥💥💥\n");
    }

    return 0;
}
