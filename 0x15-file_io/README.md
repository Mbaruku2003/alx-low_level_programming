file handling is the process of opening, creating, reading, writing and closing files
these functions are declared in the <stdio.h> header
the steps to create a file include;
declaring the file pointer
open the file using fopen
process the file using the appropriate function
close the file using fclose
i.e

FILE *file
file = fopen("filename", mode");


standard streams - the default input and outputchannels associated with a running program
standard streams include:
stdin - standard input
stdout - standard output
stderr - for standard error

stdinput functions include - scanf() and fgets();
stdoutput functions include - printf() and fputs();
stderror functions include - fprintf() and perror();
