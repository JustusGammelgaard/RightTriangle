#include <stdio.h>
#include <math.h>

void isRightTriangle(){


}


int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    printf("%s", "Please enter the three values as integers");

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a*a) + (b*b) == (c*c)||((b*b) + (c*c) == (a*a) || (a*a) + (c*c) == (b*b))){
        printf("%s\n", "The values ");
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%s", " creates a right triangle");
    } else{
        printf("%s\n", "The values ");
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%s", " does not create a right triangle");
    }

}