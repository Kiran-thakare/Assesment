//Create menu driven calculator using function
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divide(int a,int b);
int main(){
    char choice;
    int a,b,res;

    printf("Menu");
     printf("\n Select method:");
     printf("\n 1.Addition:(+)");
     printf("\n 2.Subtraction:(-)");
     printf("\n 3.Multiyply:(*)");
     printf("\n 4.Divide:(/): ");
     scanf("%d",&choice);
     printf("\n Enter Two Numbers:");
     scanf("%d %d",&a,&b);
     switch(choice){
        case 1:
         res=add(a,b);
         printf("Addition Of Two Number :%d",res);
        break;
         case 2 :
         res=sub(a,b);
        printf("Subtraction Of Two Number :%d",res);
        break;
         case 3 :
         res=mul(a,b);
        printf("Multiplication  Of Two Number :%d",res);
        break;
         case 4 :
        if (b != 0) {
                res = divide(a,b);
                printf("Result of division: %d",res);
            } else {
                printf("Error: Cannot divide by zero.\n");
                break;
            }
            break;
        default:
        printf("Envalid Choice......");
        break;
     }
    return 0;
}
 int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
