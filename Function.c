#include <stdio.h>
void add(); //function declaration
int add2();
  //Function
  /*Function is a block of code ,which has some name for
  identification.*/
  /*1-takes nothing,returns nothing.
  2-Take something ,return nothing
  3-takes nothing ,return something
  4-take something ,return soemthing*/
 void add(){ //empty parenethesis means TN,NO return keyword means
                   //Return nothing
  int a,b,c;
  printf("Enter two numbers\n");
  printf("Enter First number:\n");
  scanf("%d",&a);
  printf("Enter second number:\n");
  scanf("%d",&b);
  c=a+b;
  printf("Sum is %d\n",c);
}
int main(){
  //TNRS
 // add(); //Function call
 // int x,y;
//  scanf("%d %d",&x,&y);
 // add1(x,y);//call by value,actual argument
/* int s;
 s=add2();
 printf("Sum is %d",s);*/
 //type 4-TSRS
 int x,y,s;
 printf("Enter two numbers\n");
 scanf("%d %d ",&x,&y);
 s=add3(x,y);
 printf("Sum is %d",s);
 
}
//Type second
void add1(int a,int b){// a,b formal argument
  int c;
  c=a+b;
  printf("Sum is :%d",c);
}
//Type 3-TNRS
int add2(){
  int a,b,c;
  printf("Enter two Numeber\n");
  scanf("%d %d",&a,&b);
  c=a+b;
  return c;
}
//Type 4-TSRS
int add3(int a,int b){
  int c;
  c=a+b;
  return c;
}












