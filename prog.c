#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
//Fonction appelée lorsque CTRL-C (signal SIGINT) est envoyé à un processus
void signal_callback_handler(int signum)
{
printf("Capture du signal %d\n",signum);
exit(signum);
}
int main()
{
//Définir un handler qui traitera le signal SIGINT capture
signal(SIGINT, signal_callback_handler);
while(1)
{
printf("Program processing stuff here.\n");
sleep(1);
}
return EXIT_SUCCESS;
}
