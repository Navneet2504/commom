#include<stdio.h>
 void calculate(float value);
 int main(){
    float value=100;
    calculate(value);
    printf("value %f",value);

 }
  void calculate(float value){
     value=value+0.18*value;
     printf("value %f ",value);
  }