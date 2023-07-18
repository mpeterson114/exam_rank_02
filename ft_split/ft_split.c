#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char **ft_split(char *str)
{
	int word_count = 0;
	int i = 0;
	char **split;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '	' || str[i] == '\n'))
			i++;
		if (str[i])
			word_count++;
		while (str[i] && str[i] != ' ' && str[i] != '	' && str[i] != '\n')
			i++;
	}
	if (!(split = (char **)malloc(sizeof(char *) * (word_count + 1))))
		return NULL;
	i = 0;
	int k = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '	' || str[i] == '\n'))
			i++;
		int j = i;
		while (str[i] && str[i] != ' ' && str[i] != '	' && str[i] != '\n')
			i++;
		if (i > j)
		{
			split[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(split[k], &str[j], (i - j));
			k++;	
		}
	}
	split[k] = NULL;
	return (split);
}

/*int main()
{
	char *str = " hey   hi hello	hola";
	char **split = ft_split(str);
	int i = 0;

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", spli*/
