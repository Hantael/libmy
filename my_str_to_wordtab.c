/*
** wordtab.c for jour07 in /home/hantael/rendu/jour07/test
**
** Made by MORARD Marine
** Login   <morard_m@etna-alternance.net>
**
** Started on  Mon Oct 24 16:46:15 2016 MORARD Marine
** Last update Tue Oct 25 15:18:17 2016 MORARD Marine
*/

#include <stdlib.h>
#include <unistd.h>

int	alpha_num(char c)
{
  if ((c >= 'a' && c <= 'z')
      || (c >= 'A' && c <= 'Z')
      || (c >= '0' && c <= '9'))
    return (1);
  return (0);
}

int	count_word(char *str)
{
  int	i;
  int	word;
  int	count;

  i = 0;
  word = 0;
  count = 0;
  while (str[i++])
    {
      if (alpha_num(str[i]))
	{
	  if (word == 0)
	    {
	      word = 1;
	      count++;
	    }
	}
      else
	word = 0;
    }
  return (count);
}

char	*next_word(char *str, int i)
{
  int	j;
  char	*new;

  j = i;
  while (alpha_num(str[j]))
    j++;
  if ((new = malloc(sizeof(char) * (j - i + 1))) == NULL)
    return (NULL);
  j = 0;
  while (alpha_num(str[i]))
    new[j++] = str[i++];
  new[j] = '\0';
  return (new);
}

char	**my_str_to_wordtab(char *str)
{
  char	**wordtab;
  int	i;
  int	j;
  int	max;

  j = 0;
  i = 0;
  max = count_word(str);
  if ((wordtab = malloc(sizeof(char*) * (count_word(str) + 1))) == NULL)
    return (NULL);
  while (i <= max)
    {
      while (!alpha_num(str[j]))
	j++;
      wordtab[i] = next_word(str, j);
      while (alpha_num(str[j]))
	j++;
      i++;
    }
  wordtab[max] = NULL;
  return (wordtab);
}
