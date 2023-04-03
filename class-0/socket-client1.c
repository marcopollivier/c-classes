#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char const *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <endereço IP do servidor> <porta>\n", argv[0]);
        return 1;
    }

    // Cria o socket
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        perror("Erro ao criar socket");
        return 1;
    }

    // Define as informações de conexão do servidor
    struct sockaddr_in server;
    server.sin_addr.s_addr = inet_addr(argv[1]);
    server.sin_family = AF_INET;
    server.sin_port = htons(atoi(argv[2]));

    // Conecta ao servidor
    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0) {
        perror("Erro ao conectar");
        return 1;
    }

    // Recebe a mensagem de boas-vindas do servidor
    char buffer[1024] = {0};
    read(sock, buffer, 1024);
    printf("%s", buffer);

    // Envia o nome do cliente escolhido para o servidor
    char name[100];
    fgets(name, 100, stdin);
    send(sock, name, strlen(name), 0);

    // Loop principal do cliente
    while (1) {
        // Lê a mensagem digitada pelo usuário
        char message[1024];
        fgets(message, 1024, stdin);

        // Envia a mensagem para o servidor
        send(sock, message, strlen(message), 0);
    }

    // Fecha o socket
    close(sock);
    return 0;
}