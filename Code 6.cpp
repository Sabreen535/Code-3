#include<iostream>
using namespace std;
int main()
{

int m;

printf("\nEnter the marks:");
scanf("%d" , &m);

if( (m>=80)&&(m<=100))
printf("\nGrade A");
else if ((m>=70)&&(m<=79))
printf("\nGrade B");
else if ((m>=60)&&(m<=69))
printf("\Grade C");
else if ((m>=50)&&(m<=59))
printf ("\nGrade D");
else ((m>=40)&&(m<=49));
printf("\nGrade E");


}
