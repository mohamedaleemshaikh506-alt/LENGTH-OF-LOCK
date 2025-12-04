# LENGTH-OF-LOCK
#Introduction
The provided C code is a simple program that prompts the user to enter two strings, referred to as "LOCK 1" and "LOCK 2" (likely intended as passwords or security keys). It calculates the length of each string manually using loops and then compares their lengths to determine which one is "stronger" or if they are equal. The program outputs the lengths and a comparison result, with a message suggesting that the longer string is stronger. This code demonstrates basic string handling in C without using built-in functions like strlen, focusing on manual iteration and comparison. It serves as an educational example of fundamental programming concepts, such as loops, arrays, and conditional statements, while touching on the simplistic idea of password strength based on length.

Analysis
Code Breakdown
Input Handling: The program uses scanf("%s", str1) to read strings into fixed-size arrays (char str1[10], str2[10]). This limits input to 9 characters (leaving space for the null terminator). No checks for buffer overflow, which could lead to undefined behavior if input exceeds 9 characters.
Length Calculation: Two separate loops iterate through each string to count characters until '\0'. This is correct for null-terminated strings but redundant— a single function could be used for both. Time complexity is O(n), where n is the string length, which is efficient for short strings.
Comparison Logic: After calculating lengths, the code uses if-else statements to compare them. If lengths are equal, it prints "Equal LOCK"; otherwise, it declares the longer one "stronger." The message for LOCK 2 being stronger includes extra text, adding inconsistency.
Output and Structure: The program prints lengths and comparison results clearly. It lacks error handling (e.g., for invalid input) and uses global variables implicitly through the main function. The code is procedural and easy to follow but not modular (no functions for length or comparison).
Strengths
Simplicity: Demonstrates basic C concepts without external libraries, making it accessible for beginners.
Manual Implementation: Reinforces understanding of string termination and loops.
Educational Value: Illustrates a basic comparison algorithm.
