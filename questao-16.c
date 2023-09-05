#include <stdio.h>

int main () {
    for(int i = 0; i <= 200 ; i++) {
        if(i < 100) {
            if (!(i % 3)) printf("%d é divisível por 3\n" , i); 
        } else {
            if (!(i % 5)) printf("%d é divisível por 5\n" , i);
        }
    }
}