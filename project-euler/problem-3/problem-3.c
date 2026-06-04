#include <stdio.h>

const long num = 600851475143;
long counter;
long inner_counter;
int main() {
    for(counter=num; counter>0; counter=counter-1) {
        if (num%counter==0) {
            printf("%ld", counter);
            for(inner_counter=counter; inner_counter>0; inner_counter=inner_counter-1) {
                if (counter%inner_counter == 0) {
                    break;
                };
            };
        };
    };
};