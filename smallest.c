#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("enter the value of c\n");
    scanf("%d",&c);
    if(a<b&&a<c){
        printf("a is less then b and c\n");
    }else if(b<c&&b>a){
        printf("b is less then c and greater then a\n");
    }else{
        printf("a is not less then b and c\n");
        printf("b is not less then c and not greater then a\n");
    }
}