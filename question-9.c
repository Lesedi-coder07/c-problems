#include <stdio.h>

#define Rice 1
#define Pomelo 2
#define Watermelon 3

int main (void) {
    int crop_type, farmer_age, is_organic;
    double area;

    scanf("%d %d %d %lf", &crop_type, &farmer_age, &is_organic, &area);

    double base_rate = 0;

    // Step 1: Base rate
    if (crop_type == Rice) base_rate = 10000;
    else if (crop_type == Pomelo) base_rate = 8000;
    else if (crop_type == Watermelon) base_rate = 6000;

    // Step 2: Multipliers
    double multiplier = 1.0;

    if (is_organic == 1) {
        if (crop_type == Pomelo) multiplier *= 1.8;   // Exception A
        else multiplier *= 1.5;
    }

    if (farmer_age <= 40) {
        if (!(crop_type == Watermelon && area < 0.5)) { // Exception B
            multiplier *= 1.2;
        }
    }

    double subsidy = 0.0;

    // Step 3: Special Exception C for Rice > 5 hectares
    if (crop_type == Rice && area > 5.0) {
        double normal_area = 5.0;
        double excess_area = area - 5.0;

        subsidy = (normal_area * base_rate * multiplier) +
                  (excess_area * base_rate * 0.8 * multiplier);
    } else {
        subsidy = area * base_rate * multiplier;
    }

    // Step 4: Final Cap
    if (subsidy > 200000) subsidy = 200000;

    // Truncate to integer
    int final_amount = (int)(subsidy + 1e-6);

    printf("Final Subsidy: %d\n", final_amount);

    return 0;
}
