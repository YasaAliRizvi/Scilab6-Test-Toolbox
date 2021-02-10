rm *.o *.so test

gcc -fPIC -c trans.c
gcc -shared -o libtrans.so trans.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -ltrans -g

./test
