PROJ_NAME = Library_management_system
BUILD_DIR = Build

# All source code files
SRC = main.c\
src/view_all_books.c\
src/add_new_book.c\
src/discard_a_book.c\
src/find_a_book.c\
src/update_book_status.c

# All source code files for testing
TEST_SRC = src/view_all_books.c\
src/add_new_book.c\
src/find_a_book.c\
src/update_book_status.c\
src/discard_a_book.c\
unity/unity.c\
test/test_library_management_system.c

# Path to header files
INC_HEADER = inc

# Path to unity files
INC_TEST = unity

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

# Output file for test
TEST_OUTPUT = Test_$(PROJECT_NAME).$(EXEC)

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all:$(BUILD_DIR)
   gcc -I $(INC_HEADER) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
   $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
   mkdir $(BUILD_DIR)

test: $(TEST_SRC)
   gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_OUTPUT))
   $(call FixPath,$(BUILD_DIR)/$(TEST_OUTPUT))

clean:
   $(RM) $(call FixPath,$(BUILD_DIR)/*)
   rmdir $(BUILD_DIR)