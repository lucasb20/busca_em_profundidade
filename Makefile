all: hello

hello: main.obj dfs.obj utility.obj
	g++ -o hello main.obj dfs.obj utility.obj

main.obj: main.cpp
	g++ -o main.obj -c main.cpp

dfs.obj: dfs.cpp
	g++ -o dfs.obj -c dfs.cpp

utility.obj: utility.cpp
	g++ -o utility.obj -c utility.cpp

clean:
	rm -f *.obj hello