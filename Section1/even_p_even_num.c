#include <stdio.h>

int evenOddPosition(int num) {
    if (num<10) {
        return num%2 ? 0 : 1;
    }
    if (num<100) {
        return num%10%2==0 && num/10%2==1 ? 1 : 0;
    }
    return (num%10%2==0) && (num/10%10%2==1) ? evenOddPosition(num/100) : 0;
}







int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);


    printf("\n%d", evenOddPosition(num));






    return 0;
}
