#include<stdio.h>
#include<string.h>
int main() {

    char b[15];
    gets(b);
    printf("%s \n", b);
    printf("%d \n", sizeof(b));

    char c[20];
    fgets(c, 15, stdin);
    printf("%s \n", c);
    printf("%d \n", sizeof(c));

}
// size er ceye beshi access : Segmentation fall