all: clientapp serverapp
clientapp: client1.o
	gcc -o clientapp client1.o
client1.o: client1.c
	gcc -c client1.c

serverapp: server1.o
	gcc -o serverapp server1.o
server1.o: server1.c
	gcc -c server1.c
