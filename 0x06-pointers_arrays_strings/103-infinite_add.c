#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: alway 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
 char *infinite_add(char *n1, char *n2, char *r, int size_r)

	  {

		           int p = 0;

			            int k = 0;

				             int value1;

					              int value2;

						               int digits;

							                int sum_total = 0;

									         int carry_over = 0;

										          while (n1[p] != '\0')

												                   p++;

											           while (n2[k] != '\0')

													                    k++;

												            if (p >= size_r || k >= size_r)

														                     return (0); /*elements of array n1[] and n2[] should not exceed the size of the buffer they are contained in otherwise return null*/

													             while (p >= 0 || k >= 0 || carry_over == 1)

															              {

																	                       if (p < 0)

																				                                return (0);

																			                        else

																							                         value1 = n1[p] - '0';

																						                 if (k < 0)

																									                          return (0);

																								                  else

																											                           value2 = n2[k] - '0';

																										                   sum_total = value1 + value2 + carry_over; /*adding numbers from end of strings and carrying over*/

																												                    if (sum_total >= 10)

																															                             carry_over = 1;

																														                     else

																																	                              carry_over = 0;

																																                      if (digits >= size_r - 1)

																																			                               return (0);

																																		                       r[digits] = (sum_total % 10) + '0'; /*push back the carry over and add it the next number*/

																																				                        digits++; /*continue like this until all numbers in the string are summed*/

																																							                 p--; /*read each character from end of array n1[]*/

																																									                  k--; /*read each character from end of array n[2]*/

																																											           }

														              if (digits == size_r)/*if the counter digits equals the size of the buffer, the last space in the buffer should be made a null terminator*/

																                       return (0);

															               r[digits] = '\0';

																                reverse_array(r); /*call reverse function to get right output*/

																		         return (r);

																			  }

  int main(void)

	   {

		            char *m = "1668778";

			             char *n = "1246479";

				              char r[100];

					               char *result;

						                result = infinite_add(m, n, r, 100);

								         if (result == 0)

										          {

												                   printf("Error\n");

														            }

									          else

											           {

													                    printf("%s + %s = %s\n", m, n, result);

															             }

										           return (0);

											    }
