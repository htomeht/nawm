CC = gcc
CFLAGS = -Wall
LIBS = -lxcb

TARGETS = wm

all: $(TARGETS)

clean:
	$(ECHO) "Cleaning up build..."
	rm -f foo.o

install:
	
