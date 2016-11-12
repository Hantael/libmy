/*
** my_strncpy.c for jour04 in /home/hantael/rendu/jour04/my_strncpy
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Fri Oct 21 11:23:39 2016 MORARD Marine
** Last update Sat Oct 22 21:53:45 2016 MORARD Marine
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      if (!src[i])
	dest[i++] = 0;
      else
	{
	  dest[i] = src[i];
	  i++;
	}
    }
  dest[i + 1] = '\0';
  return (dest);
}
