# Project Owner
**Name**: Allissa Hertz

**Student ID**: 995272111

## Structure of Program

There is one main.cpp file with a single main function. This function asks the user for an initial number of plants in the store and seven temperatures, one for each day of a single week. The temperatures for each day are stored in the array dailyTemp[]. 

**Note**: An array is also used to substitute the day of the week with the name of that day. For example, index 0 is Sunday, so the program will ask the user, "What was the temperature on Sunday?"

Then, an if/if else is used to create conditions for each dailyTemp specified by the user. Each value is evaluated one at a time and a percentage of plants sold is calculated based on the weather. This calculates the plants sold in a single day based on the temperature by using the percentage from the provided table. Because a percentage is used, the value is rounded to the closest number of plants. The number of plants is then set to the total number of plants minus what was sold today and the total amount sold is set to the overall amount of plants sold plus the plants sold today.

The program ends by outputting a total sale of plants.

## Program Status

This program works completely. There are currently no known issues.

