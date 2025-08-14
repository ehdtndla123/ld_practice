CC=gcc
CXX=g++
CC_FLAGS = -m64 -g -fPIC
CXX_FLAGS = -m64 -g -std=c++17

PROJECT_ROOT = C:/Project/ld_practice
LIBSRC_DIR = $(PROJECT_ROOT)/libsrc
INC_DIR = $(PROJECT_ROOT)/inc
LIB_DIR = $(PROJECT_ROOT)/lib

main: main.c
# 	$(CC) $(CC_FLAGS) -I$(INC_DIR) main.c $(LIB_DIR)/libLog.so -o main
	$(CC) $(CC_FLAGS) -I$(INC_DIR) main.c -L$(LIB_DIR) -lLog -o main

test: test_liblog.c
	$(CXX) $(CXX_FLAGS) -I$(INC_DIR) \
		test_liblog.c \
		$(LIB_DIR)/libLog.a \
		$(LIB_DIR)/libgtest.a $(LIB_DIR)/libgtest_main.a \
		-pthread -o test_runner

run-test: test
	./test_runner

clean:
	@echo "Clean"
	rm -f main test_runner

overview:
	@echo $(INC_DIR)
	@echo $(LIB_DIR)

.PHONY: test run-test clean overview