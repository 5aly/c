#include <stdio.h>
void sum(int a, int b, int c){
    int sum= a+b+c;
    printf("%d",sum);

}
void printcollegedetails(){
    printf("\n snmimt");
}
int sumwithreturn(int a, int b){
    return a+b;
}
int main()
{
   sum(3,5,1);
   printcollegedetails();
   int result =sumwithreturn(4,8);
   printf( "\n %d",result);
}