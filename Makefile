main.exe: main.o
	gcc main.o -o main.exe -lstdc++

main.o: src/compiler/main.cpp
	gcc src/compiler/main.cpp -c -o main.o

compiler: main.exe
	${}

clean:
	del *.exe *.o
