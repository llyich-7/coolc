var:=hello.o main.o

hello:$(var)
	gcc $^ -o hello
	echo $^
%.o:%.c
	gcc -c $< -o $@
	echo $<
	echo $@
.PHONY:
clean:
	rm *.o
