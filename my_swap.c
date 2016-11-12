/*
** my_swap.c for jour03 in /home/hantael/rendu/jour03/my_swap
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Thu Oct 20 11:30:16 2016 MORARD Marine
** Last update Thu Oct 20 11:46:38 2016 MORARD Marine
*/

void	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
