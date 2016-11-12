/*
** my_strcpy.c for jour04 in /home/hantael/rendu/jour04/my_strcpy
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Fri Oct 21 11:02:24 2016 MORARD Marine
** Last update Fri Oct 21 11:34:06 2016 MORARD Marine
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
