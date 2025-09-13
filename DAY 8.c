#include<stdio.h>

int main(){
char ch;
printf("enter number ch");
scanf("%c",&ch);

if(ch>='a' && ch<='z'){
    printf("lowercase");

}else if(ch>='A' && ch<='Z'){
    printf("uppercase");
}else if(ch>='0' && ch<='9'){
    printf("digit");
}else{
    printf("special character");
}

int a;
int b;
int c;
printf("enter number a");
scanf("%d",&a);
printf("enter number b");
scanf("%d",&b);
printf("enter number c");
scanf("%d",&c);

if(a>b && a>c){
    printf("a is largest");
}else if(b>c && b>a){
    printf("b is largest");
}else{
    printf("c is largest");
}




    
    return 0;
}