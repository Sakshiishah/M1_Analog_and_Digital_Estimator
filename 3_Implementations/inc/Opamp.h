#include<stdio.h>
#define Opamp_H_INCLUDED
/**
 * @brief Opamp Menu function
 * 
 */
void opamp_f()
{
      printf("Welcome to Op-Amp Circuits \n");
      int subOption;
      printf("(Enter values as  metioned  :-  If Value is 2K = Then Enter 2000;  1m = 0.001) \n\n");
      printf("Choose type of Amplifier to calculate Gain and Output Voltage \n");
      printf("1: Inverting Amp      2: Non-Inverting Amp      3: Differential Amp \n");
      printf("4: Inverting Summing  5: Non-Inverting Summing  6: Go Back to Main Menu \n");
      scanf("%d", &subOption);
      switch(subOption)
      {
        case 1:
        printf("Inverting Amp \n");
        double r1,rf,Av,vin,vout;
        printf("R1    RF    Vin \n");
        scanf("%lf %lf %lf", &r1, &rf, &vin);
        Av = -rf / r1;
        vout = Av*vin;
        printf("Gain is %lf \n", Av);
        printf("Vout is %lf Volts\n", vout);
        break;
        
        case 2:
        printf("Non-Inverting Amp \n");
        printf("R1    RF    Vin \n");
        scanf("%lf %lf %lf", &r1, &rf, &vin);
        Av = 1+(rf/r1);
        vout = Av*vin;
        printf("Gain is %lf \n", Av);
        printf("Vout is %lf Volts\n", vout);        
        break;
        
        case 3:
        printf("Differential Amp \n");
        double vin1,vin2,r3,r4,AvI,AvN;
        printf("R1    RF    R3    R4    Vin1  Vin2 \n");
        scanf("%lf %lf %lf %lf %lf %lf", &r1, &rf, &r3, &r4, &vin1, &vin2);
        vout = -vin1*(rf/r1)+ vin2*(r4/(r3+r4))*((r1+rf)/r1);
        AvI = vout/(vin1);
        AvN = vout/(vin2);
        printf("Gain of Inverting is -%lf \n", AvI);
        printf("Gain of Non-Inverting is %lf \n", AvN);
        printf("Vout is %lf Volts\n", vout);
        break;
      
        case 4:
        printf("Inverting Summing Amp \n");
        int n;
        double rs[100],vins[100],Avs[100],vouts[100];
        vout = 0;
        printf("No.of Inputs : \n");
        scanf("%d", &n);
        printf("Enter all Rin and Vin values : \n");
        for(int i=1;i<=n;i++)
        {
        printf("R%d   Vin%d \n", i, i);
        scanf("%lf %lf", &rs[i], &vins[i]);
        }
        printf("RF \n");
        scanf("%lf", &rf);
        for(int j=1;j<=n;j++)
        {
           Avs[j] = -rf/(rs[j]);
           vouts[j] = Avs[j]*vins[j];  
           vout = vout + vouts[j];     
        }
        for(int k=1;k<=n;k++)
        {
           printf("Gain of Vin%d is %lf \n", k, Avs[k]);    
        }  
        printf("Vout is %lf Volts\n", vout);
        break;
        
        case 5:
        {
        printf("Non-Inverting Summing Amp \n");
        double ra,rb;
        vout = 0;
        double vinstotal =0;
        printf("No.of Inputs : \n");
        scanf("%d", &n);
        printf("Enter all Vin values : \n");
        for(int i=1;i<=n;i++)
        {
        printf("Vin%d \n", i);
        scanf("%lf", &vins[i]);
        }
        printf("RA    RB  \n");
        scanf("%lf %lf", &ra, &rb);
        Av = 1 + ra/rb;
        for(int j=1;j<=n;j++)
        {  
        vinstotal= vinstotal + vins[j];     
        }
        vout = Av*(vinstotal/n);  
        printf("Gain is %lf \n", Av);
        printf("Vout is %lf Volts\n", vout);
        break;
        }
        case 6:
        opamp_f();
        break;

        default : 
        printf("You have selected a wron Value. Please Select Again !");
        opamp_f();
      }

}
