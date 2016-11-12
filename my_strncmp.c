/*
** my_strcmp.c for jour04 in /home/hantael/rendu/jour04/my_strcmp
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Fri Oct 21 14:07:27 2016 MORARD Marine
** Last update Sat Oct 22 21:55:23 2016 MORARD Marine
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] < s2[i] && i < n)
	return (-1);
      if (s1[i] > s2[i] && i < n)
	return (1);
      i++;
    }
  return (0);
}
