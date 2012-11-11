test: hello
	./hello
hello:
	yasm -f elf64 hello.asm	
	ld -s -o hello hello.o
clean:
	rm *.o *.core hello
