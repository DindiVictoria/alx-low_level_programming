#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int sqrt_helper(int n, int start, int end);
int check_prime(int n, int divisor);
int _strlen(char *s);
int check_palindrome(char *s, size_t start, size_t end);

#endif