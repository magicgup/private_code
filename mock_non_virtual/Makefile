CC=g++
CFLAGS=-I.
DEPS = a.h

all: mock_non_virtual

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

liba.a: a.o
	ar crs liba.a a.o

mock_non_virtual: c.o liba.a
	$(CC) -o $@ c.o liba.a $(CFLAGS)

clean:
	rm -rf ./*.o
	rm -rf ./liba.a
	rm -rf ./mock_non_virtual
