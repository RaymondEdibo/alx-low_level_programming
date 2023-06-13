#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * counter - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int counter(char *str)
{
	int i, count = 0, l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for the words array.
 * @word_count: The number of words.
 *
 * Return: The allocated words array.
 */
char **allocate_words(int word_count)
{
	char **words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;
	return (words);
}

/**
 * copy_word - Copies a word from the input string to a new dynamically allocated string.
 * @str: The input string.
 * @start: The starting index of the word.
 * @len: The length of the word.
 *
 * Return: The new string containing the word.
 */
char *copy_word(char *str, int start, int len)
{
	char *word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return NULL;
	strncpy(word, str + start, len);
	word[len] = '\0';
	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words) or NULL if failed.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, l, wc, wl, t = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = counter(str);
	if (wc == 0)
		return (NULL);

	words = allocate_words(wc);
	if (words == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		while (str[t] == ' ')
			t++;

		l = strlen(str + t);
		wl = 0;

		for (j = 0; j < l; j++)
		{
			if (str[t + j] == ' ')
				break;
			wl++;
		}

		words[i] = copy_word(str, t, wl);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		t += wl;
	}

	words[wc] = NULL;

	return (words);
}
