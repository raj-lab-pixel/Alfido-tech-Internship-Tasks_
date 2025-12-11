#include<stdio.h>
int main(){
    float a,b;
    char operations;
    printf("enter first number: ");
    scanf("%f",&a);
    printf("enter operator + - * /: ");
    scanf(" %c",&operations);
    printf("enter second number: ");
    scanf("%f",&b);
    switch(operations){
        case '+':printf("result=%f\n",a+b);break;
        case '-':printf("result=%f\n",a-b);break;
        case '*':printf("result=%f\n",a*b);break;
        case '/':
          if(b==0)
            printf("error!division by zero");
          else
            printf("result=%f\n",a/b);break;
    }
    return 0;
}