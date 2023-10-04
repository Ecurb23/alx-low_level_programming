#/bin/bash
gcc -wall -pedantic -Werroe -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
