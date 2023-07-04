all: hello

hello: main.o dfs.obj
	g++ -o hello main.obj dfs.obj

main.obj: main.cpp
	g++ -o main.obj -c main.cpp

dfs.obj: dfs.cpp
	g++ -o dfs.obj -c dfs.cpp