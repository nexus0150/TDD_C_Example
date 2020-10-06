C_COMPILER=gcc
TARGET_BASE1=test1
TARGET_EXTENSION=.out
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
SRC_FILES1=unity/unity.c src/PrimeNumber.c test/TestPrimeNumber.c  test/TestPrimeNumber_Runner.c
INC_DIRS=-Isrc -I../src
SYMBOLS=-DTEST
CLEANUP = rm -f build/*.o ; rm -f $(TARGET1)

CFLAGS=-std=c89
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition

all: clean default

default:
	$(C_COMPILER) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)

clean:
	$(CLEANUP)
	
