#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//function to calculate the shipping cost of each product and see if the costumer wants overnight shipping or not
float Shipping_Cost(float price, bool overnightShipping) {
    float shippingCost;
    
    if (price >= 10) {
        shippingCost = 3;
    } else {
        shippingCost = 2;
    }

    if (overnightShipping) {
        shippingCost += 5;
    }

    return shippingCost;
}
//function to calculate the discount if the customer ordered more than five items
float calculate_Discount(int items, float itemPrice) {
    float total = items * itemPrice;

    if (items > 5) {
        float discount = total * 0.2;
        total -= discount;
    }

    return total;
}
//function to print the Receipt Details 
void Receipt_Details(const char* itemName, float itemPrice, bool overnightShipping, int itemsOrdered) {
    float shippingCost = Shipping_Cost(itemPrice, overnightShipping);
    float totalCost = calculate_Discount(itemsOrdered, itemPrice) + shippingCost;

    printf("************ RECEIPT ************\n");
    printf("Item Name: %s\n", itemName);
    printf("Item Price: $%.2f\n", itemPrice);
    printf("Order Quantity: %d\n", itemsOrdered);
    printf("Shipping Cost: $%.2f\n", shippingCost);
    printf("Total Cost: $%.2f\n", totalCost);
    printf("*********************************\n");
}
//
void takeOrders() {

    bool continueShopping = true;

    while (continueShopping) {
        char itemName[100];
        float itemPrice;
        bool overnightShipping;
        int itemsOrdered;

        printf("Enter item name: ");
        scanf("%99s", itemName);
        printf("Enter item price: ");
        scanf("%f", &itemPrice);
        printf("Do you want over shipping? (yes/no): ");
        char shippingChoice[4];
        scanf("%3s", shippingChoice);
        overnightShipping = (strcmp(shippingChoice, "yes") == 0);
        printf("Enter the quantity of items ordered: ");
        scanf("%d", &itemsOrdered);

        if (itemsOrdered < 2) {
            printf("Sorry sir,2 items are required as a minimum for one order..\n");
            continue;
        }

        Receipt_Details(itemName, itemPrice, overnightShipping, itemsOrdered);
     

            printf("Do you want to continue shopping? (yes/no): ");
            char shoppingChoice[4];
            scanf("%3s", shoppingChoice);
            continueShopping = (strcmp(shoppingChoice, "yes") == 0);
        
    }
}

int main() {
    printf("Welcome to our market!\n");
    takeOrders();

    return 0;
}