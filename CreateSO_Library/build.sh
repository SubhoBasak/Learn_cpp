g++ -c -shared my_lib.c -o my_lib.so
g++ test_lib.c my_lib.so -o test_lib
./test_lib
