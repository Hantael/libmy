/*
** my_put_nbr.c for my_put_nbr in /home/hantael/rendu/libmy_a
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Sat Oct 22 18:23:44 2016 MORARD Marine
** Last update Sat Nov 12 15:42:01 2016 MORARD Marine
*/

void	my_putchar(char c);
void	my_putstr(char *str);

int	divisor(int nb)
{
  int	div;

  div = 1;
  while (nb >= 10)
    {
      nb = nb / 10;
      div = div * 10;
    }
  return (div);
}

int	my_put_nbr(int nb)
{
  int	div;

  if (nb < -2147483647 || nb > 2147483647)
    {
      if (nb >= 0)
	my_putstr("2147483648");
      else
	my_putstr("-2147483648");
      return (0);
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  div = divisor(nb);
  while (div >= 1)
    {
      my_putchar((nb / div % 10) + 48);
      div = div / 10;
    }
  return (1);
}
