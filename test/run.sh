rm *.o *.so *.lib test

gcc -fPIC -c trans.c
gcc -shared -o libtrans.so trans.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -ltrans -g

cp trans.h ../thirdparty/linux/include/
cp libtrans.so ../thirdparty/linux/lib/x64/

cp trans.h ../thirdparty/Mac/include/
cp libtrans.so ../thirdparty/Mac/lib/x64/

./test
