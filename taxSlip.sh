#!/bin/bash

echo "Enter your annual salary: "
read salary

if ((salary <= 250000)); then
  tax=0
elif ((salary <= 500000)); then
  tax=$(( (salary - 250000) * 5 / 100 ))
elif ((salary <= 1000000)); then
  tax=$(( 12500 + (salary - 500000) * 20 / 100 ))
else
  tax=$(( 112500 + (salary - 1000000) * 30 / 100 ))
fi

echo "-------------------"
echo "   TAX SLIP"
echo "-------------------"
echo "Annual Salary: $salary"
echo "Tax Payable: $tax"
echo "-------------------"
