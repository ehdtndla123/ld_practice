CC=gcc
CC_FLAGS = -m64 -g -fPIC
SO_FLAGS = -shared
AR = ar
ARFLAGS = rcs

PROJECT_ROOT = C:/Project/ld_practice
LIBSRC_DIR = $(PROJECT_ROOT)/libsrc
INC_DIR = $(PROJECT_ROOT)/inc
LIB_DIR = $(PROJECT_ROOT)/lib

# all: clean LibLog.a
# 	@echo "Start"

LibLog.a: LibLog.o
	$(AR) $(ARFLAGS) LibLog.a LibLog.o
	@echo "liblog.a create"

LibLog.o: LibLog.c
	$(CC) $(CFLAGS) -c LibLog.c -o LibLog.o
	@echo "Compile"

clean:
	@echo "Clean"
	rm -f *.o *.a

install:
	cp LibLog.a $(LIB_DIR)
	cp LibLog.h $(INC_DIR)
	@echo "Install completed"

overview:
	@echo $(INC_DIR)
	@echo $(LIB_DIR)