#include<stdio.h>
#define Digital_H_INCLUDED
/**
 * @brief Digital Menu function
 * 
 */
 void digital_f()
 {
      printf("Welcome to Logic Circuits \n");
      printf("(only 0's and 1's allowed) \n\n");
      int subOption;
      printf("Choose the type of Logical Circuit you want to execute \n");
      printf(" 1: AND Gate    2: OR Gate     3: NOT Gate \n");
      printf(" 4: NAND Gate   5: NOR Gate    6: XOR Gate \n");
      printf(" 7: XNOR Gate   8: 2_1 MUX     9: 4_1 MUX  \n");
      printf("10: 1_2 DEMUX  11: 1_4 DEMUX  12: Go Back to Main Menu \n");
      scanf("%d", &subOption);
      switch(subOption)
      {
        case 1:
        printf("AND Gate \n");
        int A_in,B_in;
        printf("A B\n");
        scanf("%d %d", &A_in, &B_in);
        if(A_in==1 && B_in==1)
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        else
        {
        printf("A B Y \n");
        printf("%d %d 0 \n", A_in, B_in);
        }
        break;
        
        case 2:
        printf("OR Gate \n");
        printf("A B\n");
        scanf("%d %d", &A_in, &B_in);
        if(A_in==1 || B_in==1)
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        else
        {
        printf("A B Y \n");
        printf("%d %d 0 \n", A_in, B_in);
        }
        break;
        
        case 3:
        printf("NOT Gate \n");
        printf("A\n");
        scanf("%d", &A_in);
        if(A_in==1)
        {
        printf("A Y \n");
        printf("%d 0 \n", A_in);
        }
        else
        {
        printf("A Y \n");
        printf("%d 1 \n", A_in);
        }
        break;
        
        case 4:
        printf("NAND Gate \n");
        printf("A B\n");
        scanf("%d %d", &A_in, &B_in);
        if(A_in==1 && B_in==1)
        {
        printf("A B Y \n");
        printf("%d %d 0 \n", A_in, B_in);
        }
        else
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        break;
        
        case 5:
        printf("NOR Gate \n");
        printf("A B\n");
        scanf("%d %d", &A_in, &B_in);
        if(A_in==0 && B_in==0)
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        else
        {
        printf("A B Y \n");
        printf("%d %d 0 \n", A_in, B_in);
        }
        break;
        
        case 6:
        printf("XOR Gate \n");
        printf("A B\n");
        scanf("%d %d", &A_in, &B_in);
        if(A_in==1 && B_in==0)
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        else if(A_in==0 && B_in==1)
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        else
        {
        printf("A B Y \n");
        printf("%d %d 0 \n", A_in, B_in);
        }
        break;
        
        case 7:
        printf("XNOR Gate \n");
        printf("A B\n");
        scanf("%d %d", &A_in, &B_in);
        if(A_in==0 && B_in==0)
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        else if(A_in==1 && B_in==1)
        {
        printf("A B Y \n");
        printf("%d %d 1 \n", A_in, B_in);
        }
        else
        {
        printf("A B Y \n");
        printf("%d %d 0 \n", A_in, B_in);
        }       
        break;
        
        case 8:
        printf("2_1 MUX \n");
        int S_in;
        printf("A B S\n");
        scanf("%d %d %d", &A_in, &B_in, &S_in);
        if(S_in==0)
        {
        printf("A B S Y \n");
        printf("%d %d %d %d \n", A_in, B_in, S_in, A_in);
        }
        else
        {
        printf("A B S Y \n");
        printf("%d %d %d %d \n", A_in, B_in, S_in, B_in);
        }
        break;
        
        case 9:
        printf("4_1 MUX \n");
        int C_in,D_in,S_in1,S_in2;
        printf("A B C D S1 S2\n");
        scanf("%d %d %d %d %d %d", &A_in, &B_in, &C_in, &D_in, &S_in1, &S_in2);
        if(S_in1==0 && S_in2==0)
        {
        printf("A B C D S1 S2 Y \n");
        printf("%d %d %d %d %d %d %d \n", A_in, B_in, C_in, D_in, S_in1, S_in2, A_in);
        }
        else if(S_in1==0 && S_in2==1)
        {
        printf("A B C D S1 S2 Y \n");
        printf("%d %d %d %d %d %d %d \n", A_in, B_in, C_in, D_in, S_in1, S_in2, B_in);
        }
        else if(S_in1==0 && S_in2==0)
        {
        printf("A B C D S1 S2 Y \n");
        printf("%d %d %d %d %d %d %d \n", A_in, B_in, C_in, D_in, S_in1, S_in2, C_in);
        }
        else
        {
        printf("A B C D S1 S2 Y \n");
        printf("%d %d %d %d %d %d %d \n", A_in, B_in, C_in, D_in, S_in1, S_in2, D_in);
        }        
        break;
        
        case 10:
        printf("1_2 DEMUX \n");
        printf("A S\n");
        scanf("%d %d", &A_in, &S_in);
        if(S_in==0)
        {
        printf("A S Y1 Y0 \n");
        printf("%d %d 0 %d \n", A_in, S_in, A_in);
        }
        else
        {
        printf("A S Y1 Y0 \n");
        printf("%d %d %d 0 \n", A_in, S_in, A_in);
        }
        break;
        
        case 11:
        {
        printf("1_4 DEMUX \n");
        printf("A S1 S2\n");
        scanf("%d %d %d", &A_in, &S_in1, &S_in2);
        if(S_in1==0 && S_in2==0)
        {
        printf("A S1 S2 Y3 Y2 Y1 Y0 \n");
        printf("%d %d %d 0 0 0 %d \n", A_in, S_in1, S_in2,A_in);
        }
        else if(S_in1==0 && S_in2==1)
        {
        printf("A S1 S2 Y3 Y2 Y1 Y0 \n");
        printf("%d %d %d 0 0 %d 0 \n", A_in, S_in1, S_in2,A_in);
        }
        else if(S_in1==1 && S_in2==0)
        {
        printf("A S1 S2 Y3 Y2 Y1 Y0 \n");
        printf("%d %d %d 0 %d 0 0 \n", A_in, S_in1, S_in2,A_in);
        }
        else
        {
        printf("A S1 S2 Y3 Y2 Y1 Y0 \n");
        printf("%d %d %d %d 0 0 0 \n", A_in, S_in1, S_in2,A_in);
        }
        break;
        }
        case 12: 
        digital_f();
        break;

        default : 
        printf("You have selected wrong Value. Please Select Again !");
        digital_f();
      }
 }
