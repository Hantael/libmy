/*
** my_putstr.c for jour03 in /home/hantael/rendu/my_putstr
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Thu Oct 20 10:56:46 2016 MORARD Marine
** Last update Thu Oct 20 11:56:02 2016 MORARD Marine
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i))
    my_putchar(*(str + i++));
}
