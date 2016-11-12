/*
** my_strcmp.c for jour04 in /home/hantael/rendu/jour04/my_strcmp
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Fri Oct 21 14:07:27 2016 MORARD Marine
** Last update Fri Oct 21 14:38:30 2016 MORARD Marine
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if ((s1[i] - s2[i]) < 0)
	return (-1);
      if ((s1[i] - s2[i]) > 0)
	return (1);
      i++;
    }
  if (!s1[i] && !s2[i])
    return (0);
  else if (s1[i])
    return (1);
  return (-1);
}
