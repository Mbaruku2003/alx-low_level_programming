malloc is a function that is used to dynamically allocate memory 
dynamic memory allocation also has other function like calloc realloc and free
calloc initializes each memory part with zero
malloc initialises each address with a garbage value
realloc is used to give a new reallocated memory location
to use malloc we follow the following syntax:
int *p = (int*)malloc(X * sizeof(int))
where X is the no of elements
