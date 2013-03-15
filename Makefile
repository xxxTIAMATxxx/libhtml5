#makefile libhtml5

prefix = /usr
cc = gcc

obj = html5.o
ccflags = -c -O2 -I./include/ -std=c99 -Wall -Wextra -pedantic
ldflags = -shared
lname = -o libhtml5.so

main: $(obj)
	$(cc) $(ldflags) $(lname) $(obj) -s
	
install:
	@cp -v libhtml5.so $(prefix)/lib/
	@cp -a -v include/ $(prefix)
	
html5.o: html5.c
	$(cc) $(ccflags) html5.c
	
clean:
	@rm -f *.o
	@rm -f libhtml5.so
	
