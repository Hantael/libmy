/*
** my_strstr.c for jour04 in /home/hantael/rendu/jour04/my_strstr
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Fri Oct 21 17:28:24 2016 MORARD Marine
** Last update Sat Oct 22 19:11:16 2016 MORARD Marine
*/

#include <unistd.h>

int	my_strlen(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  while (str[j] && to_find[i])
    {
      if (to_find[i] == str[j])
	i++;
      else
	i = 0;
      if (to_find[i] == '\0')
	return (&str[j - my_strlen(to_find) + 1]);
      j++;
    }
  return (NULL);
}
