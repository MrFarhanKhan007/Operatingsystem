#!/bin/bash

echo "Enter first number: "
read num1

echo "Enter second number: "
read num2

echo "Enter operation (+, -, *, /): "
read operation

if [ $operation == "+" ]; then
    echo "$num1 + $num2 = $(expr $num1 + $num2)"
elif [ $operation == "-" ]; then
    echo "$num1 - $num2 = $(expr $num1 - $num2)"
elif [ $operation == "*" ]; then
    echo "$num1 * $num2 = $(expr $num1 \* $num2)"
elif [ $operation == "/" ]; then
    echo "$num1 / $num2 = $(expr $num1 / $num2)"
else
    echo "Invalid operation"
fi
