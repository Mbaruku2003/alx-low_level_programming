dunamic libraries are libraries in which the address of a function is stored in an executable and not the whole objective code
it saves time much more than static libarary and less spavce is used than in static libraries
the library stores its data in the heap
TO CREATE A DYNAMIC LIBRARY, USE:
gcc -c -fPIC *.c
where -c is used to create .o files.
-fPIC is used to create a positionaly independent code whih will allow the code to be taken independently by address and not the whole object code

gcc -shared -o libraryname.so *.o
the -shared is used make all the -.o filesgetinto the lib.so library
the .o is used to create the .so library

HOW TO USE THE LIBRARY
to use the dynamic library, you must compile the library with the main.c file you want to use
this will be posssible by adding the  environment for which it should be used i.e
	export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
you can then compile the file using:
	gcc -L . main.cfile -l library_name(without the lib prefix) -o
the -L is used to tell the program on where to find the library
the -l is used to tell the compiler to look for the library
