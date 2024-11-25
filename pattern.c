#include <stdio.h>

// Pattern 1: Simple Pyramid
void pattern1() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 2: Inverted Pyramid
void pattern2() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 3: Right-aligned Pyramid
void pattern3() {
    int i, j, space;
    for(i=1; i<=5; i++) {
        for(space=1; space<=5-i; space++) {
            printf("  ");
        }
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 4: Number Pyramid
void pattern4() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Pattern 5: Inverted Number Pyramid
void pattern5() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Pattern 6: Alphabet Pyramid
void pattern6() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%c ", 'A'+j-1);
        }
        printf("\n");
    }
}

// Pattern 7: Inverted Alphabet Pyramid
void pattern7() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("%c ", 'A'+j-1);
        }
        printf("\n");
    }
}

// Pattern 8: Floyd's Triangle
void pattern8() {
    int i, j, k=1;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%d ", k++);
        }
        printf("\n");
    }
}

// Pattern 9: Inverted Floyd's Triangle
void pattern9() {
    int i, j, k=15;
    for(i=5; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("%d ", k--);
        }
        printf("\n");
    }
}

// Pattern 10: Palindromic Pyramid
void pattern10() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf("  ");
        }
        for(j=i; j>=1; j--) {
            printf("%d ", j);
        }
        for(j=2; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Pattern 11: Diamond Pattern
void pattern11() {
    int i, j, space;
    for(i=1; i<=5; i++) {
        for(space=1; space<=5-i; space++) {
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(i=4; i>=1; i--) {
        for(space=1; space<=5-i; space++) {
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 12: Zig-Zag Pattern
void pattern12() {
    int i, j;
    for(i=1; i<=3; i++) {
        for(j=1; j<=19; j++) {
            if(((i+j)%4==0) || (i==2 && j%4==0)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Pattern 13: Hollow Square
void pattern13() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(i==1 || i==5 || j==1 || j==5) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// Pattern 14: Hollow Pyramid
void pattern14() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(j==1 || j==2*i-1 || i==5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Pattern 15: Hollow Diamond
void pattern15() {
    int i, j, space;
    for(i=1; i<=5; i++) {
        for(space=1; space<=5-i; space++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(j==1 || j==2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=4; i>=1; i--) {
        for(space=1; space<=5-i; space++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(j==1 || j==2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Pattern 16: Half Diamond
void pattern16() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(i=4; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 17: Mirrored Right Triangle
void pattern17() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf("  ");
        }
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 18: Reversed Mirrored Right Triangle
void pattern18() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=1; j<=5-i; j++) {
            printf("  ");
        }
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 19: Pascal's Triangle
void pattern19() {
    int i, j, k;
    for(i=0; i<5; i++) {
        int num = 1;
        for(j=1; j<=5-i; j++) {
            printf("  ");
        }
        for(k=0; k<=i; k++) {
            printf("%4d", num);
            num = num * (i - k) / (k + 1);
        }
        printf("\n");
    }
}

// Pattern 20: Binary Triangle
void pattern20() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=i; j++) {
            printf("%d ", (i+j)%2);
        }
        printf("\n");
    }
}

// Pattern 21: Alphabet Reverse Pyramid
void pattern21() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("%c ", 'A'+j-1);
        }
        printf("\n");
    }
}

// Pattern 22: Double Pyramid
void pattern22() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 23: Sandglass Pattern
void pattern23() {
    int i, j, space;
    for(i=5; i>=1; i--) {
        for(space=1; space<=5-i; space++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(i=2; i<=5; i++) {
        for(space=1; space<=5-i; space++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Pattern 24: Alphabet Hollow Pyramid
void pattern24() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(j==1 || j==2*i-1 || i==5) {
                printf("%c", 'A'+i-1);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Pattern 25: Numeric Palindromic Pyramid
void pattern25() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=i; j>=1; j--) {
            printf("%d", j);
        }
        for(j=2; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}


void pattern26() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            if(j==1 || j==2*i-1 || i==5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


void pattern27() {
    int i, j;
    for(i=5; i>=1; i--) {
        for(j=5; j>i; j--) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=2; i<=5; i++) {
        for(j=5; j>i; j--) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern28() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            printf("%c", 'A'+j-1);
        }
        printf("\n");
    }
    for(i=4; i>=1; i--) {
        for(j=1; j<=5-i; j++) {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++) {
            printf("%c", 'A'+j-1);
        }
        printf("\n");
    }
}


void pattern29() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=10; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern30() {
    int i, j;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            if(i==j || i+j==6) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    pattern6();
    pattern7();
    pattern8();
    pattern9();
    pattern10();
    pattern11();
    pattern12();
    pattern13();
    pattern14();
    pattern15();
    pattern16();
    pattern17();
    pattern18();
    pattern19();
    pattern20();
    pattern21();
    pattern22();
    pattern23();
    pattern24();
    pattern25();
    pattern26();
    pattern27();
    pattern28();
    pattern29();
    pattern30();
    
    return 0;
}