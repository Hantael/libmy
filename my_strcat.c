/*
** my_strcat.c for jour04 in /home/hantael/rendu/jour04/my_strcat
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Fri Oct 21 15:40:57 2016 MORARD Marine
** Last update Fri Oct 21 16:40:55 2016 MORARD Marine
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while (src[j])
    dest[i++] = src[j++];
  return (dest);
}
