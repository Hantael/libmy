/*
** my_getnbr.c for my_get_nbr in /home/hantael/rendu/libmy_a
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Sat Oct 22 18:24:29 2016 MORARD Marine
** Last update Tue Oct 25 13:25:58 2016 MORARD Marine
*/

#include <unistd.h>

int	my_getnbr(char *str)
{
  int	neg;
  int	i;
  int	val;

  val = 0;
  i = 0;
  neg = 1;
  if (str == NULL)
    return (0);
  while (str[i] == '-' || str[i] == '+')
    if (str[i++] == '-')
      neg = neg * (-1);
  while (str[i] >= '0' && str[i] <= '9')
    val = val * 10 + (str[i++] - '0');
  val = val * neg;
  return (val);
}
