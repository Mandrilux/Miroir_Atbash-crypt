#include "data.h"

int	main(int argc, char **argv)
{
  char	*str = NULL;
  char	**word = NULL;
  int	i = -1;
  if (argc != 2)
    return (return_error("Usage : [str]", EXIT_FAILURE));
  adjust_str(argv[1]);
  if ((str = epur_str(argv[1])) == NULL)
    return (return_error("[-] ERROR MEMORY", EXIT_FAILURE));
  if ((word = strtowordtab(str, ' ')) == NULL)
    return (return_error("[-] ERROR MEMORY", EXIT_FAILURE));
  free(str);
  while (word[++i] != NULL)
    atbash(word[i]);
  free_double_char(word);
  printf("\n");
  return (EXIT_SUCCESS);
}


int	atbash(char *str)
{
  int	i = -1;

  if (str == NULL)
    return (-1);
  while (str[++i] != '\0')
    {
      printf("%c", get_indice(str[i]));
    }
  printf(" ");
  return (1);
}

int	free_double_char(char **tab)
{
  int	i = -1;
  if (tab == NULL)
    return (-1);
  while (tab[++i] != NULL)
    free(tab[i]);
  free(tab);
  return (1);
}
