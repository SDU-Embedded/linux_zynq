CC:=gcc
#CROSS_COMPILER:=arm-linux-gnueabihf-


TARGET:=hello

SOURCEDIR:=.
BUILDDIR:=bin/
INCLUDEDIR:=include/

SOURCES := $(shell find $(SOURCEDIR) -name '*.c')
INCLUDE := $(shell find $(SOURCEDIR) -name '*.h')
OBJECTS := $(SOURCES:%.c=%.o)

CFLAGS := 

%.o: %.c $(INCLUDE)
	$(CROSS_COMPILER)$(CC) $(CFLAGS) -c -o $@ $< -I $(INCLUDEDIR)

$(BUILDDIR)$(TARGET): $(OBJECTS)
	$(CROSS_COMPILER)$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(BUILDDIR)$(TARGET) $(OBJECTS)