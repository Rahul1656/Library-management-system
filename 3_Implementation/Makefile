PROJECT_NAME = Library_management_system

SRC = main.c\
src/add_new_book.c\
src/discard_a_book.c\
src/find_a_book.c\
src/update_book_status.c

# Path to header files
INC = inc

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC) $(SRC) -o $(call FixPath,$(PROJECT_NAME).$(EXEC))

run: all
	$(call FixPath,$(PROJECT_NAME).$(EXEC))