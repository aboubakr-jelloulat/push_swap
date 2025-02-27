#include <stdio.h>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RED     "\033[31m"
#define RESET   "\033[0m"

void print_stack(t_stack *head, char title, char *color)
{
	printf("%sstack %c : \n" RESET, color , title);
	for (t_stack *curr = head; curr; curr = curr->next)
	{
		printf("%s%d\n" RESET , color, curr->data);
	}
}
