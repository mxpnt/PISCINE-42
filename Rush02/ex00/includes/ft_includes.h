#ifndef FT_INCLUDES_H
# define FT_INCLUDES_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
long int		ft_atoi(char *str);
int				ft_strlen(char *str);
int				ft_strlenup(char *str);
void			ft_putstr(char *str);
int				ft_check_error(char *str);
void			ft_error(int er);
int				ft_wordlen(char *str);
int				ft_wordcount(char *str);
char			*ft_strdup(char *str, int j);
char			**ft_split(char *str);
void			ft_disp(int x, char **index);
int				ft_check_index(char *nb, char **index);
char			*ft_read(void);
void			ft_solver(char *str);
int				ft_strcmp(char *s1, char *s2);
void			ft_order(char *nbr, char **index, int i, int pwr10);
void			ft_hundreds(char *nbr, int i, char **index);
void			ft_tens(char *nbr, int i, int pwr10, char **index);
int				ft_units(char *nbr, int i, int pwr10, char **index);
void			ft_fill(char *str, int size);
void			ft_free(char **str);
void			ft_dispend(int x, char **index);
int				ft_case1(char *nbr, int i, int pwr10, char **index);
void			ft_case2(char *nbr, int i, char **index);
#endif
