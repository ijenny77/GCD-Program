#include <stdio.h>
int gcd;
int num1,num2;
int n;

int GCD(){
    if(n == 0 ){
        printf("The GCD is %d",gcd);
      return 0;
    }
        if(num1 % n == 0 && num2 % n== 0){
            printf("The GCD is %d",n);
            return 0;
        }
        n = n - 1;
        return GCD();
    }


int main(){

    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    if (num1>0){
        n= num1;
        if(num1>num2){
            n= num2;
        }else{
            n= num1;
        }
    }else{
        n= num2;
    }
    GCD();
    return 0;
}
