/*
** my_putchar.c for my_putchar in /home/hantael/rendu/libmy_a
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Sat Oct 22 18:14:07 2016 MORARD Marine
** Last update Sat Oct 22 18:14:37 2016 MORARD Marine
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
