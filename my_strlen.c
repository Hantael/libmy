/*
** my_strlen.c for jour03 in /home/hantael/rendu/jour03/my_strlen
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Thu Oct 20 11:13:36 2016 MORARD Marine
** Last update Thu Oct 20 11:14:43 2016 MORARD Marine
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
