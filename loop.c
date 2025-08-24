#include <stdio.h>

int main() {
    char digits[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    scanf("%d \n %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i<=9){
            printf("%s\n",digits[i]);
        }else{
            if(i%2==0){
                printf("even\n");
            }else{
                printf("odd\n");
            }
        }
    }
    printf("hello word\n");
    return 0;
}