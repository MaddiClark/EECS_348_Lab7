Target = matrix
main: lab07Template.cpp
	g++ lab07Template.cpp -o $target

clean: 
	rm -rf *.o $target