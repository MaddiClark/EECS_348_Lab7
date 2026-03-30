Target = matrix
main: lab07.cpp
	g++ lab07.cpp -o $target

clean: 
	rm -rf *.o $target