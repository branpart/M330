#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void generate(unsigned long long int x){
        int i, m, a, b, n;

        a = 48271;
        b = 13;
        n = 400;
        m = pow(2, 31)-1;

        setlocale(LC_NUMERIC, "");  //for ' flag
        for (i = 0; i < n; i++){
                x = (a * x + b) % m;
                printf("Iteration %d: %'llu\n", i, x);
        }
printf("m : %d\n", m);
}

int main(int argc, char *argv[]){
        if(argc != 2)
                return 1;
        unsigned long long int x;
        x = atoi(argv[1]);
        generate(x);

        return 0;
}
