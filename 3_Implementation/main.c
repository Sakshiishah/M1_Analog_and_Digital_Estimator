#include<stdio.h>
#include"Digital.h"
#include"Opamp.h"
/**
 * @brief main menu function
 * 
 * @return int 
 */
int main()
{
    int mainOption;
    printf("Choose any One Option from the Main menu \n");
    printf("1- Logic Circuits   2-Op-Amp Circuits \n");
    scanf("%d", &mainOption);
switch(mainOption)
{
   case 1 :
      digital_f(); //for digital
      break; 
	
   case 2  :
      opamp_f();// for opamp
      break;

   default : 
      printf("You have selected wrong Value. Please Select Again !");
      main();
}
}