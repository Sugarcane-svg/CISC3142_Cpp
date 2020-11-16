#Instruction

Write a C++ program to do the following:

    1. load up any array of names from the files name.data:
        assigns integer id's to each name, starting at 1001, and in the order in which they arw read from the file(so the first name would be assigned 1001, the second 1002, etc)
    
    2. sort the array by name
    
    3. write the sorted data to the file results.data, each name / id pair on a separate line

#Sample test run #1

for example if the file names.data contains:

    Langsam
    Tenenbaum
    Arnow
    Weiss
    Cox

upon program termination, the console output should be:

    5 records processed.

the file results.data should contains:

    Arnow 1003
    Cox 1005
    Langsam 1001
    Tenenbaum 1002
    Weiss 1004

and the exit code should be 0.

#Sample test run #2

if the file name.data did not exist, the console output should be:

    *** Exception *** input file names.data not found

and the exit code should be 1.

#Sample test run #3

if the file names.data contains more than 50 names, the console output should be: 

    *** Exception *** array capacity exceeded

and the exit code should be 1.
