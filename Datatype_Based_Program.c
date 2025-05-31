
#include<stdio.h>

int main()
{
    int a;
    unsigned int b;
    float c;
    char d;
    unsigned char e;
    double f;
    long double g;
    short int h;
    unsigned short int i;
    long int j;
    unsigned long int k;
    long long int l;
    unsigned long long int m;

    printf("Enter integer unsignedinteger float char unsignedchar double longdouble shortint unsignedshortint longint unsignedlongint longlongint unsignedlonglongint : ");
    scanf("%d %u %f %c %c %lf %Lf %hd %hu %ld %lu %lld %llu",&a, &b, &c, " %c", " %c", &f, &g, &h, &i, &j, &k, &l, &m);

    printf("%d %u %f %c %c %lf %Lf %hd %hu %ld %lu %lld %llu\n", a, b, c, d, e, f, g, h, i, j, k, l, m);

    return 0;
}
