#!/bin/bash

echo "Enter the meter reading for this month: "
read current_reading

echo "Enter the meter reading for last month: "
read previous_reading

units=$(( current_reading - previous_reading ))

if (( units <= 100 )); then
  rate_per_unit=2.50
elif (( units <= 200 )); then
  rate_per_unit=3.50
else
  rate_per_unit=5.00
fi

amount=$(( units * rate_per_unit ))

echo "------------------------"
echo "   ELECTRICITY BILL"
echo "------------------------"
echo "Meter Reading (this month): $current_reading"
echo "Meter Reading (last month): $previous_reading"
echo "Units Consumed: $units"
echo "Rate per unit: Rs. $rate_per_unit"
echo "Amount Payable: Rs. $amount"
echo "------------------------"
