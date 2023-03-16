#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void validate_input(int argc, char *argv[]);
int multiply(char *num1, char *num2);

int main(int argc, char *argv[]) {
    validate_input(argc, argv);
    int result = multiply(argv[1], argv[2]);
    printf("%d\n", result);
    return 0;
}

void validate_input(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }
    char *num1 = argv[1];
    char *num2 = argv[2];
    for (int i = 0; i < strlen(num1); i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            exit(98);
        }
    }
    for (int i = 0; i < strlen(num2); i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            exit(98);
        }
    }
}

int multiply(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result[len1 + len2];
    memset(result, 0, sizeof(result));
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int n2 = num2[j] - '0';
            int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
            carry = sum / 10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0) {
            result[i_n1 + i_n2] += carry;
        }
        i_n1++;
    }
    int i = len1 + len2 - 1;
    while (i >= 0 && result[i] == 0) {
        i--;
    }
    if (i == -1) {
        return 0;
    }
    int res = 0;
    while (i >= 0) {
        res = res * 10 + result[i];
        i--;
    }
    return res;
}

