variadic functions are used under the stdarg.h header allong with printf
they have an elipsis after the last arguenment
they have macros like va_list which is used to get the variable name of the list of arguenments
the also have the va_start macro which is used to identify the variable name and the last arguenment before the alipsis
they aslo have the va_arg macro that gives the va_list name and the arguenment type we are looking for wheather integer char* or char or float,it is used to retreive the next arguenment of va_list
vaend holds the name of the valist variable
va_end is used to show the end of the list
