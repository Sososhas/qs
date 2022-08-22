#include <stdio.h>
#include <stdlib.h>

float det(float a, float b, float c)
 {
  float D;
   D=b*b-4*a*c;
  printf("D=%f",D);
  return D;
 }

void roots(float a, float b, float c,float D)
 {
  float x1,x2;
   x1=-b+sqrt(D)/2*a;
   x1=-b-sqrt(D)/2*a;
  printf("x1=%f\nx2=%f",x1,x2);
 }

int main()
{
  float a,b,c,x,D;
  printf("enter a,b,c\n");
   scanf("%f %f %f",&a,&b,&c);
  printf("a=%f\nb=%f\nc=%f\n",a,b,c);

 if (a==0)
   {
    x=-c/b;
    printf("x=%f",x);
   }
   else
    {
     D=det(a,b,c);
        if (D>0)
         roots(a,b,c,D);
        if (D=0)
        {
          printf("x1=x2");
          roots(a,b,c,D) ;
        }
      else
         {
        printf("no real roots\n");

        D=abs(D);
        roots(a,b,c,D);

      }


     }

return 0;

}
