#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "Libft/libft.h"

void send_signal(int server_id, char *message)
{
    int bit;
    int i;

    i = 0;
    while(message[i])
    {
        bit = 0;
        while(bit < 8)
        {
            if(((unsigned char)(message[i] >> 7 - bit) & 1) == 0)
                kill(server_id, SIGUSR1);
            else
                kill(server_id, SIGUSR2);
            usleep(50);
            bit++;
        }
        i++;
    }
    i = 0;
    while (i < 8)
    {
        kill(server_id, SIGUSR1);
        usleep(100);
        i++;
    }
}

int main(int argc, char **argv)
{
    int server_id;
    char *message;

    if (argc != 3)
        return (ft_printf("Invalid input.\n"), 0);
    server_id = ft_atoi(argv[1]);
    if (!server_id)
        return(ft_printf("Invalid PID.\n"), 0);
    message = argv[2];
    if (!message)
        return(ft_printf("No message.\n"), 0);
    send_signal(server_id, message);
    return (0);
}