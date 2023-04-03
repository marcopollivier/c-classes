clean: 
	rm -rf bin
	
build: clean 
	mkdir bin 
	gcc -o bin/server socket-server.c -lpthread
	gcc -o bin/client1 socket-client.c
	gcc -o bin/client2 socket-client.c

