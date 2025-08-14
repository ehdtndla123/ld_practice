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
	$(AR) $(ARFLAGS) libLog.a LibLog.o
	@echo "liblog.a create"

ld: LibLog.o
	$(CC) $(SO_FLAGS) LibLog.o -o libLog.so
	@echo "LD create"

LibLog.o: LibLog.c
	$(CC) $(CC_FLAGS) -c LibLog.c -o LibLog.o
	@echo "Compile"

clean:
	@echo "Clean"
	rm -f *.o *.a

install:
	cp libLog.a $(LIB_DIR)
	cp LibLog.h $(INC_DIR)
	@echo "Install completed"

install_ld:
	cp libLog.so $(LIB_DIR)
	cp LibLog.h $(INC_DIR)
	@echo "LD Install Completed"

overview:
	@echo $(INC_DIR)
	@echo $(LIB_DIR)