/*
Test the previous program by giving multiple transactions representing multiple ISBNs. 
The records for each ISBN should be grouped together.

Input: 
0-201-78345-X 3 20.00 
0-201-78345-X 3 20.00 
0-201-78345-X 3 20.00
0-201-70353-X 4 24.99
0-201-70353-X 4 24.99  
0-201-70353-X 4 24.99
0-201-78345-X 3 20.00
0-201-70353-X 4 24.99

Output:
Total: 0-201-78345-X 9 180 20
Total: 0-201-70353-X 12 299.88 24.99
Total: 0-201-78345-X 3 60 20
Total: 0-201-70353-X 4 99.96 24.99
*/
