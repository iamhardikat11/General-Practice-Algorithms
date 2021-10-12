#include <stdio.h>
#include <math.h>
/*Problem on https://projecteuler.net/archives Problem 3*/
#define N    3175491803

#define divisible(x,y) !remainder((x),(y))

/*Find the largest prime factor of 31758931803*/

int main(int argc, char *argv[])
{
    double mcp3(double n);
    printf("--- %.1f\n",mcp(N));
    return 0; 
}

double mcp3(register double n)
{
    double sqrt(double x);
    double remainder(double x,double y);
    register double d = 3;
    register double rt;
    if(n<2)
       return -1;
    while(divisible(n,2))
    n/=2;
    if(n==1)
      return 2;
    rt=sqrt(n);
    while(d <= rt)
    {
        if(divisible(n,d)){
            n/=d;
            rt = sqrt(n);
            continue;
        }
        d+=2;
    }
    return n;
}
