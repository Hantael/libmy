/*
** my_strdup.c for jour07 in /home/hantael/rendu/jour07/my_strdup
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Mon Oct 24 13:36:53 2016 MORARD Marine
** Last update Mon Oct 24 17:31:40 2016 MORARD Marine
*/

#include <unistd.h>
#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*new;
  int	i;

  i = 0;
  if (str == NULL)
    return (NULL);
  if (((new = malloc(sizeof(char) * my_strlen(str) + 1))) == NULL)
    return (NULL);
  while (str[i])
    {
      new[i] = str[i];
      i++;
    }
  new[i] = '\0';
  return (new);
}
