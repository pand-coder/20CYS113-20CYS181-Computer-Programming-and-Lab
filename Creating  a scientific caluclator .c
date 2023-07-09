// Creating  a scientific caluclator using c //
#include<stdio.h>
// It has printf (output) and scanf (input) functions in this header file//
#include<stdlib.h> 
/* It declares various utility functions for typeconversions 
memory allocation,algorithms and other similar cases*/
#include<math.h>
//All maths related functions are defined in this header file//
#define note "maze mat 10, enter the valid operation"
//Functions are used here to organise the work in a specific alloted work.//
// This function type is known as no argument and no return function//
//These all all are declarations which are present here to just call a function//
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void square();
void cube();
void power();
void Factorial();
void squareroot();
void cuberoot();
void sine_value();
void cos_value();
void tan_value();
void cosec();
void sec();
void cot();
void log_();

int main()
{
    printf("\t\tWelcome to the scientific caluclator\n\n"); 
    //\t is known as tab space which is used for spacing//
    int choice; // choice integer datatype variable defines your choice of operation//
    printf("\n Press 0 to Quit the program");
    printf("\n Press 1 for Addition \n");
    printf("\n Press 2 for Subtraction \n");
    printf("\n Press 3 for Multiplication \n");
    printf("\n Press 4 for Division \n");
    printf("\n Press 5 for Modulus \n");
    printf("\n Press 6 for Square \n");
    printf("\n Press 7 for cube \n");
    printf("\n Press 8 for Power \n");
    printf("\n Press 9 for Factorial \n");
    printf("\n Press 10 for Squareroot \n");
    printf("\n Press 11 for cube root\n");
    printf("\n Press 12 for sin \n");
    printf("\n Press 13 for cos \n");
    printf("\n Press 14 for tan \n");
    printf("\n Press 15 for cosec \n");
    printf("\n Press 16 for sec \n");
    printf("\n Press 17 for  cot\n\n");

    while(1)
    {
        printf("\n\n Enter the operation number which you are inteded to perform: ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            addition();
            break;
            case 2:
            subtraction();
            break;
            case 3:
            multiplication();
            break;
            case 4:
            division();
            break;
            case 5:
            modulus();
            break;
            case 6:
            square();
            break;
            case 7:
            cube();
            break;
            case 8:
            power();
            break;
            case 9:
            Factorial();
            break;
            case 10:
            squareroot();
            break;
            case 11:
            cuberoot();
            break;
            case 12:
            sine_value();
            break;
            case 13:
            cos_value();
            break;
            case 14:
            tan_value();
            break;
            case 15:
            cosec();
            break;
            case 16:
            sec();
            break;
            case 17:
            cot();
            break;
            case 18:
            log_();
            break;
            case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
            



        }
         
    }
      return 0;   
}

void addition(){
    printf("Addition : Enter the two numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}

void subtraction(){
printf("Subtraction:Enter the two numbers you want to subtract: ");
int a,b;
scanf("%d%d",&a,&b);
printf("The sum of a and b is %d\n",a-b);
}
void multiplication (){
    printf("Multiplication:Enter the two numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division(){
 printf("Division: Enter two numbers to divide: ");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Modulus : Enter ton find the modulo of them: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void square()
{
    double b;
    printf("Enter the respective base for squaring");
    scanf("%lf",&b);
    double e=pow(b,2);
    printf("The square of %lf is %lf",b,e);
}
void cube()
{
    double b;
    printf("Enter the respective base for squaring");
    scanf("%lf",&b);
    double e=pow(b,3);
    printf("The square of %lf is %lf",b,e);
}
void power()
{
    double b;
    double p;
    printf("Enter the respective base and power");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
void Factorial()
{
      int factorial,n;
    printf("Enter the number of finding the factorial of: ");
    scanf("%d",&n);
    factorial = 1;
    for(int i=1;i<=n;i++)
    {
    factorial=factorial*i;
    }
printf("\n Factorial of %d is %d",n,factorial);
}
void squareroot()
{
    double b;
    printf("Enter the number of which you want to find the square root:  ");
    scanf("%lf",&b);
    double z =sqrt(b);
    printf("The squareroot of %lf is %lf",b,z);
}
void cuberoot()
{
    double b;
    printf("Enter the number of which you want to find the cube root:  ");
    scanf("%lf",&b);
    double z =cbrt(b);
    printf("The cuberoot of %lf is %lf",b,z);
}
void sine_value()
{
    double angle,radians;
    //Read input angle from user in degrees//
    printf("Enter angle in degrees");
    scanf("%lf",&angle);
    /*conversion of angle to radians
    1 radian = 180degrees/pi */
    double sin_value = sin(radians);
printf("Trigonometric values for angle %.2lf degrees:\n",angle);
printf("Sin:%.2lf\n",sin_value);
}
void cos_value()
{
    double angle,radians;
    //Read input angle from user in degrees//
    printf("Enter angle in degrees");
    scanf("%lf",&angle);
    /*conversion of angle to radians
    1 radian = 180degrees/pi
    pi radians = 180 degrees */
    double cos_value = cos(radians);
printf("Trigonometric values for angle %.2lf degrees:\n",angle);
printf("cos:%.2lf\n",cos_value);
}
void tan_value()
{
    double angle,radians;
    //Read input angle from user in degrees//
    printf("Enter angle in degrees");
    scanf("%lf",&angle);
    /*conversion of angle to radians
    1 radian = 180degrees/pi 
    pi radians = 180 degrees */
    double tan_value = cos(radians);
printf("Trigonometric values for angle %.2lf degrees:\n",angle);
printf("tan:%.2lf\n",tan_value);
}

void cosec()
{
    double angle,radians;
    //Read input angle from user in degrees//
    printf("Enter angle in degrees");
    scanf("%lf",&angle);
    /*conversion of angle to radians
    1 radian = 180degrees/pi 
    pi radians = 180 degrees */
    double csc_value = 1/sin(radians);
printf("Trigonometric values for angle %.2lf degrees:\n",angle);
printf("csc:%.2lf\n",csc_value);
}
void sec()
{
    double angle,radians;
    //Read input angle from user in degrees//
    printf("Enter angle in degrees");
    scanf("%lf",&angle);
    /*conversion of angle to radians
    1 radian = 180degrees/pi 
    pi radians = 180 degrees */
    double sec_value = 1/cos(radians);
printf("sec:%.2lf\n",sec_value);
}
void cot()
{
    double angle,radians;
    //Read input angle from user in degrees//
    printf("Enter angle in degrees");
    scanf("%lf",&angle);
    /*conversion of angle to radians
    1 radian = 180degrees/pi 
    pi radians = 180 degrees */
    double cot_value = 1/tan(radians);
printf("Trigonometric values for angle %.2lf degrees:\n",angle);
printf("cot:%.2lf\n",cot_value);
}
void log_()
{
   double x, result;
    printf("Enter a number: ");
    scanf("%lf", &x);
    result = log10(x);
    printf("The logarithm of %lf is %lf\n", x, result);
}