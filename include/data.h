
#ifndef DATA_H_
#define DATA_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

		/* strtoword.c */

int		 count_words(char *str, char decoup);
int		 wordlen(char *str, char decoup);
char*		 complete_line(char *str, int nb, char decoup);
char		 **small_tab(char *str);
char		 **strtowordtab(char *str, char decoup);

		/* error.c */

int		 return_error(char *error, int flag);

		/* str.c */

char		 *epur_str(char *str);
void		 adjust_str(char *str);
char		 get_indice(char c);

		/* main.c */

int		 main(int argc, char **argv);
int		 atbash(char *str);
int		 free_double_char(char **tab);

#endif /* DATA_H_ */
