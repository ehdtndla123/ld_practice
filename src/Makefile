CC=gcc
CC_FLAGS = -m64 -g -fPIC

PROJECT_ROOT = C:/Project/ld_practice
LIBSRC_DIR = $(PROJECT_ROOT)/libsrc
INC_DIR = $(PROJECT_ROOT)/inc
LIB_DIR = $(PROJECT_ROOT)/lib


main: main.c
	$(CC) $(CC_FLAGS) -I$(INC_DIR) main.c $(LIB_DIR)/libLog.so -o main
# 	$(CC) $(CC_FLAGS) -I$(INC_DIR) main.c -L$(LIB_DIR) -lLog -o main

clean:
	@echo "Clean"
	rm -f main

overview:
	@echo $(INC_DIR)
	@echo $(LIB_DIR)