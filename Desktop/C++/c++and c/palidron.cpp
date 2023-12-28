#include<stdio.h>
#include<math.h>
bool is_palindrome(int n)
 { int rev = 0,
  temp = n; 
  while (temp > 0) {
   rev = rev * 10 + temp % 10;
    temp /= 10; } return rev == n;
	 }

bool is_prime(int n) {
 if (n <= 1) { return false; } 
 for (int i = 2; i <= sqrt(n); i++) 
 { if (n % i == 0) { return false; } } return true; }

bool is_palindromic_prime(int n) {
 return is_palindrome(n) && is_prime(n);
  }

int main() {
 int n; scanf("%d", &n);
  if (is_palindromic_prime(n))
   { printf("YES\n"); } 
   else { printf("NO\n"); 
   }
    return 0; 
}
