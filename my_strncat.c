/*
** my_strcat.c for jour04 in /home/hantael/rendu/jour04/my_strcat
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Fri Oct 21 15:40:57 2016 MORARD Marine
** Last update Sat Oct 22 21:42:20 2016 MORARD Marine
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while (j < n)
    {
      if (src[j] == '\0')
	{
	  dest[i] = '\0';
	  return (dest);
	}
      dest[i++] = src[j++];
    }
  return (dest);
}
