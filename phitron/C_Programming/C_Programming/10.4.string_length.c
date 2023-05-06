#include<stdio.h>
#include<string.h>
int main() {

    char b[15];
    gets(b);
    printf("%s \n", b);
    printf("%d \n", sizeof(b));

    int count = 0;
    for (int i = 0; b[i] != '\0'; i++) count++;

    printf("%d \n", count);
    printf("%d  \n", strlen(b));

}
// size er ceye beshi access : Segmentation fall