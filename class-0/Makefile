clean:
	rm -rf bin
	
build: clean
	mkdir bin
	gcc -o bin/server socket-server.c -lpthread
	gcc -o bin/client1 socket-client.c
	gcc -o bin/client2 socket-client.c

run-server:
	./bin/server 8888

run-client:
	./bin/client1 127.0.0.1 8888