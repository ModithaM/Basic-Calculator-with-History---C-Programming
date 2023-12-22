#include <stdio.h>
#include <math.h> //for square root and power calculation

//Function Declaring
void plus(float);
void minus(float);
void multiplication(float);
void devide(float);
void sqroot(float);
void power(float);

int main (void)  //Main Function
{
char type ;
float no1 ;

printf("\nEnter No 1 : ");
scanf("%f",&no1);

printf("\n\"+ for addition , - for subtraction , * for multiplication, / for division, S for square root , P for Power\"\n");
printf("\nEnter Math Function: ");
scanf(" %c",&type);

   switch (type) //switching math type
  {
    case '+':
    plus(no1);
    break;

    case '-':
    minus(no1);
    break;

    case '*':
    multiplication(no1);
    break;

    case '/':
    devide(no1);
    break;

    case 'S':
    sqroot(no1);
    break;

    case 'P':
    power(no1);
    break;

    default:
    printf("\nWrong input Try Again\n");
    break;
  }

 return 0;     
} 

void plus(float n1) // addition function
{
   float n2;
   FILE*fptr;  
   fptr = fopen("calHistory.txt" , "a"); //Open File
   printf("\nEnter No 2 : ");
   scanf("%f",&n2);
   printf("\n%.2f + %.2f Equal To %.3f\n\n",n1,n2,n1+n2);
   fprintf(fptr , "\n%.2f + %.2f Equal To %.3f\n\n",n1,n2,n1+n2); //write to file
   fclose(fptr); //Close File
}

void minus(float n1)  //subtraction function
{
   float n2;
   FILE*fptr;  
   fptr = fopen("calHistory.txt" , "a"); //Open File
   printf("\nEnter No 2 : ");
   scanf("%f",&n2);
   printf("\n%.2f - %.2f Equal To %.3f\n\n",n1,n2,n1-n2);
   fprintf(fptr , "\n%.2f - %.2f Equal To %.3f\n\n",n1,n2,n1-n2); //write to file
   fclose(fptr); //Close File
}

void multiplication(float n1)  //multiplication function
{
   float n2;
   FILE*fptr;  
   fptr = fopen("calHistory.txt" , "a"); //Open File
   printf("\nEnter No 2 : ");
   scanf("%f",&n2);
   printf("\n%.2f * %.2f Equal To %.3f\n\n",n1,n2,n1*n2);
   fprintf(fptr , "\n%.2f * %.2f Equal To %.3f\n\n",n1,n2,n1*n2); //write to file
   fclose(fptr); //Close File
}

void devide(float n1) //devide function
{
   float n2;
   FILE*fptr;  
   fptr = fopen("calHistory.txt" , "a"); //Open File
   printf("\nEnter No 2 : ");
   scanf("%f",&n2);
   printf("\n%.2f / %.2f Equal To %.2f\n\n",n1,n2,n1/n2);
   fprintf(fptr , "\n%.2f / %.2f Equal To %.2f\n\n",n1,n2,n1/n2); //write to file
   fclose(fptr); //Close File
}

void sqroot(float n1)  //square rooot function
{
   FILE*fptr;  
   fptr = fopen("calHistory.txt" , "a"); //Open File
   printf("\nSquart root of %.2f is = %.3f\n\n", n1, sqrt(n1) );
   fprintf(fptr , "\nSquart root of %.2f is = %.3f\n\n", n1, sqrt(n1)); //write to file
   fclose(fptr); //Close File
}

void power(float n1)  //power function
{
   float n2;
   FILE*fptr;  
   fptr = fopen("calHistory.txt" , "a"); //Open File
   printf("\nEnter Power : ");
   scanf("%f",&n2);
   printf("\n%.2f To the Power of %.2f = %.3f\n\n",n1,n2, pow(n1, n2) );
   fprintf(fptr , "\n%.2f To the Power of %.2f = %.3f\n\n",n1,n2, pow(n1, n2)); //write to file
   fclose(fptr); //Close File
}
