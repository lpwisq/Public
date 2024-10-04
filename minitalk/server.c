#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "Libft/libft.h"

static int ft_power_of_2(int num)
{
    int result;

    result = 1;
    while (num > 0)
    {
        result = result * 2;
        num--;
    }
    return (result);
}

static char *add_to_msg(char *message, char alphabet)
{
    char *concat_msg;
    int i;

    i = 0;
    concat_msg = (char *)malloc((ft_strlen(message) + 2) * sizeof(char));
    if (!concat_msg)
        return (NULL);
    while (message[i])
    {
        concat_msg[i] = message[i];
        i++;
    }
    concat_msg[i] = alphabet;
    concat_msg[i+1] = '\0';
    free(message);
    return(concat_msg);
}

void handler(int signum)
{
    static int bit = 0;
    static int ascii_num = 0;
    static char *message;

    if (!message)
        message = ft_strdup("");
    if (signum == SIGUSR2)
        ascii_num = ascii_num + ft_power_of_2(7 - bit);
    else
        ascii_num = ascii_num + 0;
    bit++;
    if (bit == 8)
    {
        // ft_printf("ascii %i\n", ascii_num);
        ft_printf("%c", ascii_num);
        // message = add_to_msg(message, ascii_num);
        // if (ascii_num == 0)
        // {
        //     ft_printf("output: %s\n", message);
        //     message = NULL;
        // }
        bit = 0;
        ascii_num = 0;
    }
}

int main(void)
{
    pid_t pid;
    struct sigaction sa;

    pid = getpid();
    ft_printf("PID is %i\n", pid);
    sa.sa_handler = handler;
    sa.sa_flags = 0;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    while (1)
        usleep(100);
    return (0);
}