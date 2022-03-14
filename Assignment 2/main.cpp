#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int numberOfPlants, i, dailyTemp[7];
    string daysOfWeek[7] = {"Sunday", "Monday","Tuesday","Wednesday", "Thursday", "Friday", "Saturday"};
    double plantsSold;

    //Ask user for the number of plants in the store
    cout << "How many plants are in the store on day one?" << endl;

    //User inputs the number of plants in the store
    cin >> numberOfPlants;

    //Ask user for the temperatures for each day of the week
    //User inputs the temperature for each day of the week (7 inputs)
    for (i=0; i<7; i++)
    {
        cout << "What was the temperature for " << daysOfWeek[i] << "?" << endl;
        cin >> dailyTemp[i];
    }
    // Determine the percent of plants sold per day based on dailyTemp
    // Calculate the estimated number of plants that will be sold in a week
    for (i=0; i<7; i++)
    {
        int plantsSoldToday;
        if (dailyTemp[i] < 40){
            plantsSoldToday = round(numberOfPlants * .1);
            numberOfPlants -= plantsSoldToday;
            plantsSold +=plantsSoldToday;
        }
        if (dailyTemp[i] >= 40 && dailyTemp[i] < 60){
            plantsSoldToday = round(numberOfPlants * .3);
            numberOfPlants -= plantsSoldToday;
            plantsSold +=plantsSoldToday;
        }
        if (dailyTemp[i] >= 60 && dailyTemp[i] < 70){
            plantsSoldToday = round(numberOfPlants * .5);
            numberOfPlants -= plantsSoldToday;
            plantsSold +=plantsSoldToday;
        }
        if (dailyTemp[i] >= 70 && dailyTemp[i] < 80){
            plantsSoldToday = round(numberOfPlants * .6);
            numberOfPlants -= plantsSoldToday;
            plantsSold +=plantsSoldToday;
        }
        else if (dailyTemp[i] >= 80){
            plantsSoldToday = round(numberOfPlants * .4);
            numberOfPlants -= plantsSoldToday;
            plantsSold +=plantsSoldToday;
        }
    }

    cout << "The estimated total sale is " << plantsSold << " plants." << endl;
    return 0;
}

