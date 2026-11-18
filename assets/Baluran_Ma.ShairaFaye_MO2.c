#include <stdio.h>
int main () {

    int distance_t, travel_t, fuel_eff, packdel;
    float fuelppl, driverpph, add_delexp;


    printf("Enter total distance in km: ");
    scanf("%d", &distance_t); //distance

    printf("\nEnter total travel time in minutes: ");
    scanf("%d", &travel_t); //travel time

    printf("\nEnter fuel efficiency in km/L: ");
    scanf("%d", &fuel_eff); //fuel efficiency

    printf("\nEnter fuel price per liter: ");
    scanf("%f", &fuelppl); //fuel price

    printf("\nEnter number of packages: ");
    scanf("%d", &packdel); //number of packages

    printf("\nEnter driver payment per hour in pesos: ");
    scanf("%f", &driverpph); //driver payment

    printf("\nEnter additional expenses in pesos: ");
    scanf("%f", &add_delexp); //additional expenses

    printf("\n\n========================================");
    printf("\n\tDELIVERY TRIP REPORT");
    printf("\n========================================");

    printf("\nTotal Distance\t\t:%d km", distance_t);

    float tth = (float) travel_t / 60; //travel time in hours
    printf("\nTravel Time\t\t:%.2f hours", tth);

    float fuelcon = (float) distance_t / fuel_eff; //fuel consumed
    printf("\nFuel Consumed\t\t:%.2f liters", fuelcon);

    float fuelcos = fuelcon * fuelppl; //fuel cost
    printf("\nFuel Cost\t\t:PHP %.2f", fuelcos);

    float driverpay = tth * driverpph; //driver payment
    printf("\nDriver Payment\t\t:PHP %.2f", driverpay);

    printf("\nAdditional Expenses\t:PHP %.2f", add_delexp);

    printf("\n----------------------------------------");

    float totdevcos = fuelcos + driverpay + add_delexp; //total delivery cost
    printf("\nTotal Delivery Cost\t:PHP %.2f", totdevcos);

    float cosperpac = (float) totdevcos / packdel; //cost per package
    printf("\nCost per Package\t:PHP %.2f", cosperpac);

    float avespe = (float) distance_t / tth; //average speed
    printf("\nAverage Speed\t\t:%.2f km/h", avespe);

    printf("\n========================================\n");

return 0;
}
