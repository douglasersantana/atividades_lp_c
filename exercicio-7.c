#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   

    double a = 10, r = 5;
    double Aq = a*a;
    double pi;
    unsigned int seed;
    seed = time(NULL);
    srand(seed);

    int qt = 10000, qc = 0;
    printf("Quantos pontos deseja utilizar? ");
    scanf("%d", &qt);
    for(int i = 0; i < qt; i++)
    {   
        seed = time(NULL);
        srand(seed);
        double x, y;
        x = -5 + ((double)rand()/RAND_MAX)*10 ;
        y = -5 + (10.0*rand()/RAND_MAX);
        if(x*x + y*y <= 25 )
            qc++;
    }
    pi = 4.0*qc/qt;
    printf("O valor estimado de Pi é %.10f\n", pi);
    return 0;
}