#include <stdio.h>

int main() {
    int n; 
    int m;
    int sum=0;
    int temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    m=n;
 while (m!=0) {
        sum+=m%10;
        m/=10;
    }
    if (n% sum == 0) {
        printf("%d is a Harshad number.\n", n);
    } else {
        printf("%d is not a Harshad number.\n", n);
    }
return 0;
}