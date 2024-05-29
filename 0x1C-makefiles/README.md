makefiles are files that are used to update new files and compile new files
they have a target a prerequisite and a recipe
:= is used to remove recursion
all i used to target all the targets that follow it as default,
this is ot similar to .DEFAULT_GOAL which will target only one target s default
clean shold not b added to all as it will clean everything
.PHONY - makes all run regardless of wheather the fils mentioned after all exists or not or when the updates were done
	HOW TO USE CLEAN
to use clean we call it manually e.g
			$ make clean
ok
