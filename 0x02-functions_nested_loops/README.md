The directory is all uses of header files
it is also about function declaration, description and calling
in function declaration;
we use the form:
function _type function name (parameter arguenments)
e.g
int leonard(int leo, int leo)
on the arguenment part, one only has to state the arguenment type
the arguenment name is not necessary

in order to prevent errors in files use:
#ifndef X_header
#ifndef X_HEADER

prototypes
#endif
after this one should go to the .c file and use #include "x.h"
