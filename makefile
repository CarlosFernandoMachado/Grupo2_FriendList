FriendList.exe:	lab5.o amigos.o
	g++ lab5.o amigos.o -lncurses

lab5.o:	lab5.cpp amigos.h
	g++ -c lab5.cpp -lncurses

amigos.o:	amigos.h amigos.cpp
	g++ -c amigos.cpp

