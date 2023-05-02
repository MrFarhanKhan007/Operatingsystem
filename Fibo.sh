#!/bin/bash

echo "Enter the number of terms in the sequence: "
read n

# Initialize the first two terms of the sequence
a=0
b=1

echo "Fibonacci sequence:"

# Loop n times to generate the sequence
for (( i=0; i<n; i++ ))
do
  echo "$a"
  # Calculate the next term in the sequence and update variables
  c=$(( a + b ))
  a=$b
  b=$c
done
