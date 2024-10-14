#include "libft.h"

static int	count_delim(char const *s, char c);
static char	**split_in_words(char **result, const char *s, char c);
static int	add_word(char **result, int current_w_index, const char **s, char c);
static void	free_memory(char **result, int current_w_index);

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!*s)
		return (0);
	result = (char **) malloc(count_delim(s, c) + 2);
	if (!result)
		return (0);
	//call of the split function
	if (!split_in_words(result, s, c))
	{
		free(result);
		return (0);
	}
	return (result);
}

static int	count_delim(char const *s, char c)
{
	int	del_count;

	del_count = 0;
	while (*s)
	{
		if (*s == c)
			del_count++;
		s++;
	}
}
//The function returns 0 if the allocation fails
static char	**split_in_words(char **result, const char *s, char c)
{
	int	current_w_index;

	current_w_index = 0;
	while (*s)
	{
		if (!add_word(result, current_w_index, &s, c))
		{
			free_memory(result, current_w_index);
			return (0);	
		}
		current_w_index++;
	}
	return (result);
}
//This function allocats new memory space and assignes the new word to it.
static int	add_word(char **result, int current_w_index, const char **s, char c)
{
	unsigned int	word_len;

	if (current_w_index)
		*s = *s + 1;
	if (ft_strchr(*s, c))
		word_len = ft_strchr(*s, c) - *s;
	else
		word_len = ft_strlen(*s);
	*(result + current_w_index) = (char *) malloc(word_len + 1);
	if (!*(result + current_w_index))
		return (0);
	strlcpy(*(result + current_w_index), *s, word_len + 1);
	*s = *s + word_len;
	return (1);
}
	
//This function will release all the word allocations
static void	free_memory(char **result, int current_w_index)
{
	while (current_w_index >= 0)
	{
		free(*(result + current_w_index));
		current_w_index--;
	}
}
