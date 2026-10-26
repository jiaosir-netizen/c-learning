#include<stdio.h>
#include<math.h>
double f(int);
double g(int k,double x);
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%.8lf\n",f(n));
    
    return 0;
}
double f(int n) {
    if (n <= 1) return cos(pow(0.5, 0.5));
    return f(n / 2) + g(n % 3, sqrt(n)) + tgamma(0.5);
}
double g(int k, double x) {
    if (x < 2) return exp(k);
    return (int)x + g(k % 3 + 1, x / 2) + f(x);
}