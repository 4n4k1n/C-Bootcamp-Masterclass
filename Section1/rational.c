#include <stdio.h>
#include <stdbool.h>

typedef struct rational {
    int numerator;
    int denominator;
}Rational;

void increment(Rational *r) {
    r->numerator += r->denominator;
}

void decrement(Rational *r) {
    r->numerator -= r->denominator;
}

Rational add(Rational r1, Rational r2) {
    Rational result = {r1.numerator * r2.denominator + r2.numerator * r1.denominator, r1.denominator * r2.denominator};
    return result;
}

Rational sub(Rational r1, Rational r2) {
    Rational result = {r1.numerator * r2.denominator - r2.numerator * r1.denominator, r1.denominator * r2.denominator};
    return result;
}

Rational mul(Rational r1, Rational r2) {
    Rational result = {r1.numerator * r2.numerator, r1.denominator * r2.denominator};
    return result;
}

Rational div(Rational r1, Rational r2) {
    Rational result = {r1.numerator * r2.denominator, r1.denominator * r2.numerator};
    return result;
}

int lessThan(Rational r1, Rational r2) {
    return r1.numerator/r1.denominator < r2.numerator/r2.denominator ? 1 : 0;
}

int greaterThan(Rational r1, Rational r2) {
    return r1.numerator/r1.denominator > r2.numerator/r2.denominator ? 1 : 0;
}

int isEqual(Rational r1, Rational r2) {
    return r1.numerator/r1.denominator == r2.numerator/r2.denominator ? 1 : 0;
}

int isNotEqual(Rational r1, Rational r2) {
    return r1.numerator/r1.denominator != r2.numerator/r2.denominator ? 1 : 0;
}

void rationalPrint(Rational r) {
    printf("%d/%d", r.numerator, r.denominator);
}



int main() {
    Rational r1 = {1, 2};
    Rational r2 = {1, 4};
    char operator;
    int choice;


    printf("\nEnter the operator(p, m, +, -, *, /, <, >, =, !): ");
    scanf(" %c", &operator);

    bool need_second_rational = (operator == 'p') || (operator == 'm') ? false : true;


    printf("\nEnter the numerator of the first rational: ");
    scanf("%d", &r1.numerator);
    printf("\nEnter the denominator of the first rational: ");
    scanf("%d", &r1.denominator);

    if (need_second_rational) {
        printf("\nEnter the numerator of the second rational: ");
        scanf("%d", &r2.numerator);
        printf("\nEnter the denominator of the second rational: ");
        scanf("%d", &r2.denominator);
    }


    switch (operator) {
        case 'p':
            increment(&r1);
            rationalPrint(r1);
            break;
        case 'm':
            decrement(&r1);
            rationalPrint(r1);
            break;
        case '+':
            rationalPrint(add(r1, r2));
            break;
        case '-':
            rationalPrint(sub(r1, r2));
            break;
        case '*':
            rationalPrint(mul(r1, r2));
            break;
        case '/':
            rationalPrint(div(r1, r2));
            break;
        case '<':
            printf(lessThan(r1, r2)==1 ? "\nIs less." : "\nIs not less.");
            break;
        case '>':
            printf(greaterThan(r1, r2)==1 ? "\nIs greater." : "\nIs not greater.");
            break;
        case '=':
            printf(isEqual(r1, r2)==1 ? "\nIs equal." : "\nIs not equal.");
            break;
        case '!':
            printf(isNotEqual(r1, r2)==1 ? "\nIs not equal." : "\nIs equal.");
            break;
    }
    return 0;
}
