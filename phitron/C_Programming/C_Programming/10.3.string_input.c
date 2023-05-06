#include<stdio.h>
int main() {
    char a[6];
    scanf("%s", a); // &a na dileo hbe
    printf("%s \n", a);
    printf("%d \n", sizeof(a));

    char b[15];
    scanf("%s", b); // space dile puro ta nibe na
    printf("%s \n", b);
    printf("%d \n", sizeof(b));

}
// size er ceye beshi access : Segmentation fall