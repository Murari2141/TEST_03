#include <stdio.h>

int main() {
	
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            break;
        }
    }

    if (i == length / 2) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

}
