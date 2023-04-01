#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 8080
#define MAX_CLIENTS 30

// Estrutura para armazenar informacoes dos clientes conectados
struct client {
    int socket;
    char name[20];
}

// enviar mensagem para todos os clientes conectados
void send_message(char* message, int sender_socket, struct client* clients, int num_clients) {
    for(int i = 0; i <num_clients; i++) {
        if (clients[i].socket != sender_socket) {
            send(clients[i].socket, message, strlen(message), 0);
        }
    }
}

